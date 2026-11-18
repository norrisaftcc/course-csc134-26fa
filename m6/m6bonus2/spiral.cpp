// M6BONUS2 - Path B: Spiral
// Turtle spirals without the turtle. Every pixel knows two facts:
// how far it is from the center, and at what angle.
#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;

const int SIZE = 320;
const int ARMS = 3;          // try 1, 5, 8
const double TWIST = 0.15;   // try 0.05, 0.4

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
    double dx = x - SIZE / 2;
    double dy = y - SIZE / 2;
    double distance = sqrt(dx * dx + dy * dy);
    double angle = atan2(dy, dx);

    // wave runs from -1 to 1. Shift it to 0 to 1.
    double wave = sin(distance * TWIST + angle * ARMS);
    double level = (wave + 1) / 2;

    r = static_cast<int>(255 * level);
    g = static_cast<int>(120 * level);
    b = static_cast<int>(255 * (1 - level));
}
