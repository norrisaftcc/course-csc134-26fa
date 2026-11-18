// M6BONUS2 - Path A: Sprite
// The whole picture is one question, asked 102,400 times:
// "Pixel at (x, y), what color are you?"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

const int GRID = 16;            // the sprite is 16 x 16 cells
const int SCALE = 20;           // each cell becomes 20 x 20 pixels
const int SIZE = GRID * SCALE;  // 320 x 320 image

// The art. One string per row, one letter per cell.
// (A list of strings like this is called an array. More in Module 7.)
const string SPRITE[GRID] = {
    "................",
    ".....rrrrrr.k...",
    ".....rrrrrr.k...",
    "....rrrrrrrrk...",
    "..ooggggggggoo..",
    "..oghhgggggggo..",
    ".oghggggggggggo.",
    ".oggwwggggwwggo.",
    ".oggwkggggwkggo.",
    "oggggggggggggggo",
    "oggggggggggggggo",
    "ogggggkkkkgggggo",
    "oggggggggggggggo",
    ".oggggggggggggo.",
    "..oooooooooooo..",
    "................"
};

void pixelColor(int x, int y, int &r, int &g, int &b);

int main() {
    ofstream out("output.ppm");
    out << "P3\n" << SIZE << " " << SIZE << "\n255\n";

    for (int y = 0; y < SIZE; y++) {        // rows, top to bottom
        for (int x = 0; x < SIZE; x++) {    // columns, left to right
            int r, g, b;
            pixelColor(x, y, r, g, b);
            out << r << " " << g << " " << b << "\n";
        }
    }

    out.close();
    cout << "Wrote output.ppm (" << SIZE << " x " << SIZE << ")" << endl;
    return 0;
}

// Find the cell that holds this pixel, then look up the letter's color.
void pixelColor(int x, int y, int &r, int &g, int &b) {
    char letter = SPRITE[y / SCALE][x / SCALE];

    switch (letter) {
        case 'o': r = 20;  g = 60;  b = 40;  break;  // outline
        case 'g': r = 80;  g = 200; b = 120; break;  // body
        case 'h': r = 190; g = 255; b = 210; break;  // highlight
        case 'r': r = 220; g = 40;  b = 40;  break;  // fez
        case 'w': r = 255; g = 255; b = 255; break;  // eye
        case 'k': r = 20;  g = 20;  b = 30;  break;  // pupil, mouth
        default:  r = 30;  g = 30;  b = 60;  break;  // '.' background
    }
}
