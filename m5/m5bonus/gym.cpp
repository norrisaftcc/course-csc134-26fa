// gym.cpp — the sum gate. No password is stored. Only the RULE is.
//
// Build:  g++ -std=c++17 -Wall -Wextra gym.cpp -o gym
// Run:    ./gym YOURGUESS
//
// White-hat / capture-the-flag demo. This program never stores a password,
// so `strings` will not hand it to you. But the CHECK is still in the file.
// Read the rule, then build an input that satisfies it. Many inputs pass.

#include <iostream>
#include <string>

int  sumOf(const std::string& s);        // prototypes
bool check(const std::string& guess);

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "usage: ./gym PASSWORD\n";
        return 0;
    }

    std::string guess = argv[1];

    if (check(guess))
        std::cout << "correct — flag{sums_are_not_secrets}\n";
    else
        std::cout << "incorrect\n";

    return 0;
}

int sumOf(const std::string& s) {
    int total = 0;
    for (char c : s)
        total += c;           // a char IS its code. C++ needs no ord().
    return total;
}

bool check(const std::string& guess) {
    return guess.length() == 6       // rule 1: exactly six characters
        && guess[0] == 'c'           // rule 2: first character is 'c'
        && sumOf(guess) == 531;      // rule 3: character codes sum to 531
}
