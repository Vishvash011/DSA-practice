#include <iostream>
#include <string>
using namespace std;

bool backspaceCompare(string S, string T) {
    string resultS, resultT;

    for(int i=0; i<S.length(); i++) {
        if (S[i] == '#') {
            if (!resultS.empty()) {
                resultS.pop_back();
            }
        } else {
            resultS.push_back(S[i]);
        }
    }

    for(int i=0; i<S.length(); i++) {
        if (T[i] == '#') {
            if (!resultT.empty()) {
                resultT.pop_back();
            }
        } else {
            resultT.push_back(S[i]);
        }
    }

    return resultS == resultT;
}

int main() {
    string S = "ab#c";
    string T = "ad#c";

    if (backspaceCompare(S, T)) {
        cout << "The strings are equal after backspace." << endl;
    } else {
        cout << "The strings are not equal after backspace." << endl;
    }

    return 0;
}
