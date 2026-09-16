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
    double volume;                              // V = l * w * h, in cubic ft
    double crate_cost;                          // price to make the crate, USD per cubic ft
    double crate_charge;                        // price we sell it for, USD per cubic ft
    double profit;                              // charge - cost

    // Get the dimensions of the crate
    cout << "Please enter the crate dimensions." << endl;
    cout << "Crate length: ";
    cin  >> length;
    cout << "Crate width:  ";
    cin  >> width;
    cout << "Crate height: ";
    cin  >> height;

    // Calculate the volume (everything else depends on this value)
    volume = length * width * height;           // cubic feet

    // Calculate price and cost
    crate_cost = COST_PER_CUBIC_FOOT * volume;
    crate_charge = CHARGE_PER_CUBIC_FOOT * volume;

    // Calculate profit (price - cost)
    profit = crate_charge - crate_cost; // What they pay us, minus what we spent.

    // Display results to user
    cout << setprecision(2) << fixed;   // 2 decimals for all values
    cout << "A crate measuring " << length << " x " << width << " x " << height << " ft." << endl;
    cout << "Is volume: " << volume << " cubic ft." << endl;
    cout << endl;
    cout << "Cost to build: $" << crate_cost << endl;
    cout << "Sells for:     $" << crate_charge << endl;
    cout << "Profit:        $" << profit << endl; 

    return 0; // no errors
}

