#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    bool palindrome = true;
    for (size_t i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - 1 - i]) {
            palindrome = false;
            break;
        }
    }
    cout << (palindrome ? "Palindrome" : "Not a palindrome") << endl;
    return 0;
}
