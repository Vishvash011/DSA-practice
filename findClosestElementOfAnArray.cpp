#include<iostream>
#include<vector>
using namespace std;

// approach 1 ----->>>>

// vector<int> twoPtrMethod(vector<int>& arr, int k , int x)
// {
//     int l = 0;
//     int h = arr.size()-1;

//     while(h-l >= k)
//     {
//         if(x - arr[l] > arr[h] - x)
//         {
//             l++;
//         }
//         else{
//             h--;
//         }
//     }
//     return vector<int>(arr.begin() + l , arr.begin() + h + 1);
// }
// vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//     return twoPtrMethod(arr , k , x);
// }

int lowerBound(vector<int>arr , int x)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = end;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;
        if(arr[mid] >= x)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > x)
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}
vector<int> bs_method(vector<int> arr , int k , int x)
{
    int h = lowerBound(arr, x);
    int l = h - 1;

    while(k--)
    {
        if(l<0)
        {
            h++;
        }
        else if(h >= arr.size())
        {
            l--;
        }
        else if(x - arr[l] > arr[h] - x)
        {
            h++;
        }
        else {
            l--;
        }
    }
    return vector<int>(arr.begin() + l + 1 , arr.begin() + h);
}

vector<int> findClosestElements(vector<int> arr, int k, int x) {
    return bs_method(arr , k , x);
}
int main()
{
    vector<int>arr{8,12,15,16,21,84,88,93,95,98,100};
    int k = 4;
    int x = 84;
    vector<int>ans = findClosestElements(arr , k ,x);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}