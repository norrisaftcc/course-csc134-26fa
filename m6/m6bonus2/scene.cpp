// M6BONUS2 - Path C: Scene
// A title-card background built from if statements.
// Each shape is a yes/no question: "Is this pixel inside?"
#include <fstream>
#include <iostream>
using namespace std;

const int SIZE = 320;
const int HORIZON = 220;                 // y where the ground starts
const int SUN_X = 160, SUN_Y = 200, SUN_RADIUS = 60;

void pixelColor(int x, int y, int &r, int &g, int &b);

int main() {
    ofstream out("output.ppm");
    out << "P3\n" << SIZE << " " << SIZE << "\n255\n";

    for (int y = 0; y < SIZE; y++) {
        for (int x = 0; x < SIZE; x++) {
            int r, g, b;
            pixelColor(x, y, r, g, b);
            out << r << " " << g << " " << b << "\n";
        }
    }

    out.close();
    cout << "Wrote output.ppm (" << SIZE << " x " << SIZE << ")" << endl;
    return 0;
}

void pixelColor(int x, int y, int &r, int &g, int &b) {
    int dx = x - SUN_X;
    int dy = y - SUN_Y;
    bool inSun = dx * dx + dy * dy <= SUN_RADIUS * SUN_RADIUS;

    if (y >= HORIZON) {
        // ground, with a lighter band every 20 rows
        r = 30; g = 20; b = 50;
        if ((y - HORIZON) % 20 < 3) { r = 230; g = 80; b = 160; }
    } else if (inSun) {
        r = 255; g = 220; b = 90;
    } else {
        // sky: purple at the top, orange at the horizon
        r = 60 + y * 195 / HORIZON;
        g = 20 + y * 100 / HORIZON;
        b = 120 - y * 60 / HORIZON;
    }
}
