/*
CSC 134
M2LAB1 - Crates
norrisa
9/16/26
Exercise 3.11 from Gaddis
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Declare constants and variables
    // These are constant and never change unless we change the program.
    const double COST_PER_CUBIC_FOOT = 0.23;    //(Material & fabrication cost per cu ft, our cost to make)
    const double CHARGE_PER_CUBIC_FOOT = 0.50;  // (Billed invoice amount per cu ft, customer cost)
    // Variables describing the crate
    double length, width, height;               // you can declare multiple of same type at once
    double crate_cost;                          // price to make, USD
    double crate_charge;                        // price we sell it for, USD
    double profit;                              // charge - cost

    // Get the dimensions of the crate
    cout << "Please enter the crate dimensions." << endl;
    cout << "Crate length: ";
    cin  >> length;
    cout << "Crate width:  ";
    cin  >> width;
    cout << "Crate height: ";
    cin  >> height;

    // Calculate price and cost

    // Calculate profit (price - cost)

    // Display results to user

    return 0; // no errors
}

