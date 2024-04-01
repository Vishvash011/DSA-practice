#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> commonElementInSortedArrays(vector<int>arr , vector<int>brr , vector<int>crr)
{
    vector<int>ans;
    set<int>st;
    int i,j,k;
    i=j=k=0;
    
    while(i<arr.size() && j<brr.size() && k<crr.size())
    {
        if(arr[i] == brr[j] && brr[j] == crr[k])
        {
            st.insert(arr[i]);
            i++,j++,k++;
        }
        else if(arr[i] < brr[j])
        {
            i++;
        }
        else if(brr[j] < crr[k])
        {
            j++;
        }
        else{
            k++;
        }
    }
    for(auto it : st)
    {
        ans.push_back(it);
    }
    return ans;
}
int main()
{
     vector<int>arr{1,2,3,4,5,6};
     vector<int>brr{5,6,7,8,9,10};
     vector<int>crr{5,6,11,12,13,14,15,16};
     vector<int>result;
     result = commonElementInSortedArrays(arr,brr,crr);
     cout<<"Common elements are: ";
     for (auto val : result){
        cout << val << " ";
        }
     return 0;
}












// int main()
// {
//     vector<int>arr{1,2,3,4,5,6};
//     vector<int>brr{5,6,7,8,9,10};
//     vector<int>crr{5,6,11,12,13,14,15,16};
//     vector<int>ans;
//     for(int i=0;i<arr.size();i++)
//     {
//         int el1 = arr[i];
//         for(int j=0;j<brr.size();j++)
//         {
//             int el2 = brr[j];
//             for(int k=0;k<crr.size();k++)
//             {
//                 if(el1==el2 && el2==crr[k])
//                 {
//                     cout<<crr[k]<<" ";
//                 }
//             }
//         }
//     }
//     // cout<<commonElement(arr,brr,crr);
//     return 0;
// }