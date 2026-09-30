// CSC 134
// M3LAB2 - Letter Grades
// norrisa
// 9/30/26
// Convert number grades to letter grades

#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to the number grade to letter grade conversion program." << endl << endl;
    cout << "Enter a number grade (0-100): ";

    // declare variables
    int num_grade;
    char letter_grade; // only one letter long; uses single quotes like 'A' , not "A"

    cin >> num_grade;
    cout << "You entered: " << num_grade << endl;
    

    return 0; 
}