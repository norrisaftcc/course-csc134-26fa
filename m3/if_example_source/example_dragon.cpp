// CSC 134
// M3LAB1 - Menus and Choices
// student
// 9/28/26

#include <iostream>
using namespace std;

// ========================================================
// 1. FUNCTION DECLARATIONS (PROTOTYPES)
// Tell the C++ compiler these functions exist before main()
// ========================================================
void attackDragon();
void fleeCombat();
void negotiatePeace();

int main() {
  int choice; // menu choice

  // Display the menu
  cout << "A wild dragon appears! What will you do?" << endl;
  cout << "1. Attack with fiery broadsword" << endl;
  cout << "2. Cast invisibility and flee" << endl;
  cout << "3. Attempt to negotiate with gold" << endl;
  cout << "? "; // the prompt
  cin >> choice;

  // Branching: test the user's choice
  if (1 == choice) {
    attackDragon();
  }
  else if (2 == choice) {
    fleeCombat();
  }
  else if (3 == choice) {
    negotiatePeace();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0; // tells the computer that we finished without errors

} // end of main()

// ========================================================
// 2. FUNCTION DEFINITIONS
// Define what each function does after main() has finished
// ========================================================
void attackDragon() {
  cout << "You chose: Attack with fiery broadsword" << endl;
  cout << "You strike a critical blow and slay the beast!" << endl;
}

void fleeCombat() {
  cout << "You chose: Cast invisibility and flee" << endl;
  cout << "You vanish into shadows and escape unharmed." << endl;
}

void negotiatePeace() {
  cout << "You chose: Attempt to negotiate with gold" << endl;
  cout << "The dragon takes your coins and allows passage!" << endl;
}
