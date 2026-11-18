// quilt.cpp - instructor tool. Stitches student tiles into one class image.
// Usage: ./quilt COLUMNS tile1.ppm tile2.ppm ...
// Each tile must be a P3 file, 320 x 320, max value 255.
// Output: quilt.ppm (P6, binary, to keep the file small).
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int TILE = 320;

bool loadTile(const string &name, vector<unsigned char> &pixels);

int main(int argc, char *argv[]) {
    if (argc < 3) {
        cout << "Usage: ./quilt COLUMNS tile1.ppm tile2.ppm ..." << endl;
        return 1;
    }
    int columns = stoi(argv[1]);
    if (columns < 1) {
        cout << "COLUMNS must be 1 or more." << endl;
        return 1;
    }

    vector<vector<unsigned char>> tiles;
    for (int i = 2; i < argc; i++) {
        vector<unsigned char> pixels;
        if (loadTile(argv[i], pixels)) {
            tiles.push_back(pixels);
        }
    }
    if (tiles.empty()) {
        cout << "No good tiles. Nothing written." << endl;
        return 1;
    }

    int count = static_cast<int>(tiles.size());
    int rows = (count + columns - 1) / columns;
    int width = columns * TILE;
    int height = rows * TILE;

    ofstream out("quilt.ppm", ios::binary);
    out << "P6\n" << width << " " << height << "\n255\n";
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            int index = (y / TILE) * columns + (x / TILE);
            unsigned char rgb[3] = {25, 25, 25};   // empty slot = dark gray
            if (index < count) {
                int offset = ((y % TILE) * TILE + (x % TILE)) * 3;
                rgb[0] = tiles[index][offset];
                rgb[1] = tiles[index][offset + 1];
                rgb[2] = tiles[index][offset + 2];
            }
            out.write(reinterpret_cast<char *>(rgb), 3);
        }
    }
    out.close();
    cout << "Wrote quilt.ppm: " << count << " tiles, "
         << width << " x " << height << endl;
    return 0;
}

// Reads one P3 tile. Reports the reason if the tile is rejected.
bool loadTile(const string &name, vector<unsigned char> &pixels) {
    ifstream in(name);
    string magic;
    int width = 0, height = 0, maxValue = 0;
    if (!(in >> magic >> width >> height >> maxValue)) {
        cout << "SKIP " << name << ": cannot read the header" << endl;
        return false;
    }
    if (magic != "P3" || width != TILE || height != TILE || maxValue != 255) {
        cout << "SKIP " << name << ": need P3, 320 x 320, max 255 (found "
             << magic << ", " << width << " x " << height << ", max "
             << maxValue << ")" << endl;
        return false;
    }
    pixels.clear();
    int value;
    while (static_cast<int>(pixels.size()) < TILE * TILE * 3 && in >> value) {
        if (value < 0) value = 0;
        if (value > 255) value = 255;
        pixels.push_back(static_cast<unsigned char>(value));
    }
    if (static_cast<int>(pixels.size()) != TILE * TILE * 3) {
        cout << "SKIP " << name << ": wrong pixel count ("
             << pixels.size() / 3 << " pixels)" << endl;
        return false;
    }
    return true;
}
