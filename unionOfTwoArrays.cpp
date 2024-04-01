// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;
// int main()
// {
//     int arr[] = {1,3,5,7,9};
//     int sizea = 5;
//     int brr[] = {2,2,6,8};
//     int sizeb = 4;
//     vector<int>ans;

//     for(int i=0; i<sizea;i++)
//     {
//         ans.push_back(arr[i]);
//         arr[i] = INT_MIN;
//     }

//     for(int i=0; i<sizeb;i++)
//     {
//         ans.push_back(brr[i]);
//         brr[i] = INT_MIN;
//     }

//     cout<<"printing ans array : "<<endl;
//     for(int i = 0; i < ans.size() ; i++)
//     {
//         if(ans[i] != INT_MIN)
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> unionWithoutDuplicates(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> result;
    
    // Insert all elements from arr1
    for (int num : arr1) {
        result.push_back(num);
    }
    
    // Insert elements from arr2 that are not already in result
    for (int num : arr2) {
        if (find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    
    return result;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 4, 5, 6, 7};
    
    vector<int> unionArray = unionWithoutDuplicates(arr1, arr2);
    
    cout << "Union of arrays without duplicates: ";
    for (int num : unionArray) {
        cout << num << " ";
    }
    cout <<endl;
    
    return 0;
}
