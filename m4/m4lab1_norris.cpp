// CSC 134
// M4 Lab 1
// norrisa
// 10/12/26
// Draw boxes with text

#include <iostream>
using namespace std;

int main() {
    string token = "✅"; // use any character you want
    //const int WIDTH = 5;
    //const int HEIGHT = 5;
    // Get validated values
    int width = 0;
    int height = 0;
    while (width <= 0 || height <= 0) {
        cout << "Enter rectangle width: ";
        cin >> width;
        cout << "Enter rectangle height: ";
        cin >> height;
        // optional: complain
        if (width <=0) {
            cout << "Width cannot be zero or negative." << endl;
        }
        if (height <=0) {
            cout << "Height cannot be zero or negative." << endl;
        }
    }


    cout << "Part 1 " << endl;
    // First part: Printing one row
    for (int i = 0; i < width; i++) {
        cout << token << " "; // adding a space
    }
    cout << endl; // end the row

    cout << "Part 2 " << endl;
    // Next part: printing one column
    for (int j = 0; j < height; j++) {
        cout << token << endl;
    }

    cout << "Here is your rectangle " << width << " by " << height << endl;
    // Full rectangle: print height number of rows. 
    // each row is width long.
    for (int j = 0; j < height; j++) {
        // draw one full row
        for (int i = 0; i < width; i++) {
            cout << token << " ";
        } // (repeat width times)
        cout << endl; // end of row
    } // (repeat height times)
}
