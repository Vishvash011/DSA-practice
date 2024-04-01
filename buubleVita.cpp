#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int bubbleSortSwaps(vector<int>& arr, bool ascending) {
    int n = arr.size();
    int swaps = 0;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            bool condition = (ascending) ? (arr[j] > arr[j + 1]) : (arr[j] < arr[j + 1]);

            if (condition) {
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }
    }

    return swaps;
}

int minSwapsToMakeBeautiful(vector<int>& arr) {
    vector<int> arrCopyAsc = arr;
    vector<int> arrCopyDesc = arr;

    int ascSwaps = bubbleSortSwaps(arrCopyAsc, true);
    int descSwaps = bubbleSortSwaps(arrCopyDesc, false);

    return min(ascSwaps, descSwaps);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = minSwapsToMakeBeautiful(arr);

    cout << result << endl;

    return 0;
}
