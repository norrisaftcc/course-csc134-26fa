// CSC 134
// M2T1 - Receipt
// norrisa
// 9/14/26
// Build a receipt that looks like a receipt.

#include <iostream>
// iomanip lets you use setw() and setprecision() and fixed
#include <iomanip>
using namespace std;

int main() {

    // DECLARE VARIABLES
    string meal_name;           // ex: "Chicken Sandwich"
    double meal_price;          // $
    double tax_rate;            // Percent
    double tax_amount;          // $
    double total;               // $, meal + tax

    // INPUT
    // Right now, nothing. They pick exactly one sandwich.
    // For now, hard code some values
    meal_name  = "Chicken Sandwich"; // pick your own if you want
    meal_price = 5.99;
    tax_rate   = 0.08; // 8% 

    // PROCESSING
    // tax $ is the meal $ times the tax rate
    tax_amount  = meal_price * tax_rate;
    total       = meal_price + tax_amount;

    // OUTPUT
    // TODO: Print like a receipt
    string line = "------------------------------------";
    cout << line << endl;
    // Set width of columns and set 2 decimal places
    // requires up top this line: #include <iomanip>
    cout << setprecision(2) << fixed; 
    cout << setw(20) << meal_name << setw(10) <<  meal_price << endl;
    cout << setw(20) << " tax: " <<  setw(10) << tax_amount << endl;
    cout << line << endl;
    cout << setw(20) << "Total: " << setw(10) << total << endl;
    cout << "Thank You Come Again" << endl << endl;
    return 0; // no errors
}
