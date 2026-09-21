// CSC 134
// M3T1 - Comparing Areas
// norrisa
// 9/21/26
// Get area of two rectangles, find the largest one.

#include <iostream>
using namespace std;

int main() {
    // Declare variables for each rectangle
    double length1, width1, area1;
    double length2, width2, area2;

    // Input: Ask for length and width of both.
    cout << "First rectangle:" << endl;
    cout << "\tlength ? ";
    cin  >> length1;
    cout << "\twidth  ? ";
    cin  >> width1;

    cout << "2nd rectangle:" << endl;
    cout << "\tlength ? ";
    cin  >> length2;
    cout << "\twidth  ? ";
    cin  >> width2;
    // another way to do it:
    //cout << "Enter rectangle 1's dimensions, put a space between them." << endl;
    //cin  >> length1 >> width1; 

    // Calculation: find area of both
    area1 = length1 * width1;
    area2 = length2 * width2;

    // Output: print the areas
    cout << "Rectangle 1 is area: " << area1 << endl;
    cout << "Rectangle 2 is area: " << area2 << endl;
    // TODO: Tell the user which one is larger (more area)
    // if statements test for true or false
    if (area1 > area2) {
        cout << "Rectangle 1 is larger." << endl;
    }
    else if (area2 > area1) {
        cout << "Rectangle 2 is larger." << endl;
    }
    else {
        cout << "They are the same size." << endl;
    }

    return 0;
}
