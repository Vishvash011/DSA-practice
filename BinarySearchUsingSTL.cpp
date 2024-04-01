#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr{5,7,9,12,18,56,78,92,100};
    int brr[] = {5,7,9,12,18,56,78,92,100,120};
    int size = 10;
    int target = 13;
    //binary search
    
    if(binary_search(arr.begin(),arr.end(),target))
    {
        cout<<"found"<<endl;
    }
    else{
        cout<<"not fount"<<endl;
    }

    if(binary_search(brr , brr+size , 120))
    {
        cout<<"found"<<endl;
    }
    else{
        cout<<"not fount"<<endl;
    }
    return 0;
}