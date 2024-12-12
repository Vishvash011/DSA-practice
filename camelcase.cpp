#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "saveHelloFriends";
    for (char c : s) {
        if (isupper(c)) {
            cout << endl;
        }
        if (islower(c)) {
            cout << static_cast<char>(toupper(c));
        } else if (isupper(c)) {
            cout << static_cast<char>(tolower(c));
        } else {
            cout << c;
        }
    }

    return 0;
}
