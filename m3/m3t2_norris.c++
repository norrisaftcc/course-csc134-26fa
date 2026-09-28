// CSC 134
// M3T2 - Random Numbers
// norrisa
// 9/23/26
// Start writing a simple "Craps" casino game.

#include <iostream>
#include <cstdlib>       // for random
#include <ctime>         // for time()
using namespace std;

int main() {

    // random number generator
    // rand() needs to be seeded with srand()
    // most "random" is to use the time
    srand(time(0)); // current seed is the time right now
    // cout << rand() << " " << rand() << endl;
    // To get a number in a usable size, use % (modulo)
    int roll1 = (rand() % 6) + 1; // mod 6 is 0-5, so add one for 1-6
    int roll2 = (rand() % 6) + 1; 
    int total = roll1 + roll2;
    int point; // only used if you roll a point
    cout << "You rolled: 🎲 " << roll1 << " + 🎲 " << roll2 << " = " << total << endl;
    // Processing -- figure out win, lose, or point
    // || is OR -- both sides must be full Boolean expressions (&& is AND)
    if (total == 7 || total == 11) {
        cout << "You win!" << endl;
    }
    else if (total == 2 || total == 3 || total == 12) {
        cout << "You lose." << endl;
    }
    else {
        // point numbers (TODO in Module 4)
        point = total; // last roll becomes the point number
        cout << "Your point number is: " << point << endl;
        cout << "Keep rolling: point is win, 7 is loss." << endl;
        // we'll finish this later because it requires a loop.
    }

    return 0;
}
