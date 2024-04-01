#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{10,20,40,60,70,90,50,30};
    int sum = 100;

    for(int i=0;i<arr.size();i++)
    {
        int element = arr[i];
        for(int j=i+1; j<arr.size(); j++)
        {
            int element2 = arr[j];
            for(int k=j+1; k<arr.size(); k++)
            {
                if(element + element2 + arr[k] == sum)
                {
                    cout<<"Pair found ("<<element<< "," <<element2<<","<<arr[k]<<")"<<endl;
                }
            }
        }
    }
    return 0;
}