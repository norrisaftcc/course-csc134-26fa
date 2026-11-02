#include <iostream>
#include <limits>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
[name]
[date]

This template is a starting point for your own program.
We use void functions to tell a simple story.
The player makes choices, and each choice calls a function.
*/

// FUNCTION PROTOTYPES
// Every function you write must be listed here, above main().
// The compiler reads the file from top to bottom. A prototype
// tells it: "this function exists, and its full code is below."
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
// TODO: add your new prototypes here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // Start the story.
  main_menu();
  // When main_menu() returns, the story is over.
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

// FUNCTION DEFINITIONS
// The full code for each function goes here, below main().

void main_menu() {
  // A menu that accepts 1, 2, 3, or 4 (quit).
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice = 0;
  cin >> choice;
  if (cin.fail()) {
    // The player typed something that is not a number.
    cin.clear(); // reset cin so it can read again
    choice = 0;  // treat it as an invalid choice
  }
  // Throw away the rest of the line the player typed.
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    // call choice 3 here
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    main_menu(); // try again
  }
}

void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked." << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice = 0;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_back_door() {
  cout << "You circle around to the back of the house." << endl;
  cout << "Do you:" << endl;
  cout << "1. Investigate the garden" << endl;
  cout << "2. Check out the shed" << endl;
  cout << "Choose: ";
  int choice = 0;
  cin >> choice;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    cout << "The garden is overgrown, and the plants begin to move." << endl;
    cout << "A thorny vine lashes out at you!" << endl;
    cout << "You grab a fallen garden rake and fight back." << endl;
    cout << "After a tough battle, the mutant plants retreat into the dirt." << endl;
    cout << "You escape the garden and decide the house is too dangerous." << endl;
  } else if (2 == choice) {
    cout << "You open the shed and find a dusty bottle of weedkiller." << endl;
    cout << "You take it with you. It might help with those strange plants." << endl;
  } else {
    cout << "That's not a valid choice." << endl;
  }
}

void choice_go_home() {
  cout << "TODO: Write something here" << endl;
}

// TODO: add your new function definitions here
