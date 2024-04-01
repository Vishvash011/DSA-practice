#include <iostream>
using namespace std; 
int main() {
    int i,n;
    int count = 0;
    cout<<"Enter the value of n for the range: ";
    cin>>n;
    for (int i = 0; i <= n; i++) {
        if (i <= 1) {
            continue;
        }
        bool isPrime = true;
        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            ++count;
        }
    }
    cout << "Total prime numbers in the range: " << count << endl;
    return 0;
}
