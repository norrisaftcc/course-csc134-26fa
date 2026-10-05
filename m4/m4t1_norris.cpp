// CSC 134
// M4T1 - Basic Loops
// norrisa
// 10/5/26
#include <iostream>
using namespace std;

int main() {
    // counting loop (part 1)
    int count = 1;
    while (count <= 5) {
        cout << "Hello #" << count << endl;
        count++; // increment AFTER showing the number
    }
    // table of squares (part 2)
    const int MIN_NUM = 1;
    const int MAX_NUM = 10;

    cout << endl << "Num    Num Squared" << endl;
    cout << "-----------------" << endl;
    int i = MIN_NUM;
    while (i <= MAX_NUM) {
        cout << i << "\t" << i*i << endl;
        i++;
    }

}