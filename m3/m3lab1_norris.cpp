// CSC 134
// M3LAB1 - Menus and Choices
// norrisa
// 9/28/26

#include <iostream>
using namespace std;

// DECLARE that your functions are coming later, before main()
// after main, DEFINE your functions in full.
void chooseDoor1();
void chooseDoor2();

int main() {
  int choice; // menu choice

  // ask the question
  cout << "Do you choose Door 1 or Door 2?" << endl;
  cout << "1. Choose Door #1" << endl;
  cout << "2. Choose Door #2" << endl;
  cout << "? "; // the prompt
  cin >> choice;
  // can also say (choice == 1)
  if (1 == choice) {
    chooseDoor1();
  }
  else if (2 == choice) {
    chooseDoor2();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
    // program ends, or we could loop around again
  }

  cout << "Thank you for playing!" << endl;
  return 0; // tells the computer that we finished without errors

} // end of the main() method

// After main(), we define all our other functions.
// (Declaring means "This function exists", we did that above.)
// (Defining means "This is what the function does".)
void chooseDoor1() {
  // this function is called in main if the user chooses 1.
  cout << "You chose Door 1" << endl;
  cout << "You win ... A NEW CAR!" << endl;
  cout << "1. Hop in the car and drive" << endl; 
  cout << "2. Donate the car to charity" << endl;
}

void chooseDoor2() {
  // this function is called in main if the user chooses 1.
  cout << "You chose Door 2" << endl;
  cout << "You win ... a bottle of floor wax." << endl;
}

// If we had a Door #3, or 4, we would add another else if to our
// main(), and then declare and define chooseDoor3() and so on.
