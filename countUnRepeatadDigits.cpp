#include <iostream>
using namespace std;

bool hasRepeatedDigits(int num) {
    bool digitExists[10] = {false}; // Assuming decimal digits

    while (num > 0) {
        int digit = num % 10;
        if (digitExists[digit]) {
            return true; // Repeated digit found
        }
        digitExists[digit] = true;
        num /= 10;
    }
    return false; // No repeated digits found
}

int countNumbersWithNoRepeatedDigits(int n1, int n2) {
    int count = 0;

    for (int num = n1; num <= n2; ++num) {
        if (!hasRepeatedDigits(num)) {
            ++count;
        }
    }

    return count;
}

int main() {
    
    int n1_2 = 101, n2_2 = 200;
    cout << countNumbersWithNoRepeatedDigits(n1_2, n2_2) << endl; // Output: 72

    return 0;
}
