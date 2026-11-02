#include <iostream>
#include <limits>
using namespace std;
// FUNCTION PROTOTYPES
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  main_menu();
  cout << "Thanks for playing!" << endl;
  return 0;
}
// FUNCTION DEFINITIONS
void main_menu() {
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
    cin.clear();
    choice = 0;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return;
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    main_menu();
  }
}
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked." << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  cout << "Choose: ";
  int choice = 0;
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}


void choice_back_door() {
  cout << "BAD END: Giant Plant eats you." << endl;
  cout << "Do you:" << endl;
  cout << "1. Something new" << endl;
  cout << "Choose: ";
  int choice = 0;
  cin >> choice;
  if (1 == choice) {
    // TODO: call a function here
  }
}

void choice_go_home() {
  cout << "GOOD END: Home Safe." << endl;
  cout << "Do you:" << endl;
  cout << "1. Something new" << endl;
  cout << "Choose: ";
  int choice = 0;
  cin >> choice;
  if (1 == choice) {
    // TODO: call a function here
  }
}