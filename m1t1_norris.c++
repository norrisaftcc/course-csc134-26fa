// CSC 134
// Norrisa
// M1T1 - Hello, World
// 8/24/26

// Startup
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, CSC 134!!!"; // C-OUT, not count
    cout << endl;                // end-l (L, not 1) or "\n" is end of line.

    cout << "What's your name? ";
    string name;
    cin >> name;

    cout << "Nice to meet you, " << name << "." << endl;

    return 0; // no errors
}