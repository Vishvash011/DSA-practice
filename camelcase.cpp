#include <iostream>
#include <string>

int main() {
    std::string s = "saveHello";
    for (char c : s) {
        if (isupper(c)) {
            std::cout << std::endl;
        }
        if (islower(c)) {
            std::cout << static_cast<char>(toupper(c));
        } else if (isupper(c)) {
            std::cout << static_cast<char>(tolower(c));
        } else {
            std::cout << c;
        }
    }

    return 0;
}
