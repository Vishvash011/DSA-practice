#include<iostream>
using namespace std;
int main()
{
    int number, sum = 0;
    
    cout<<"Enter the number up to which you want to find the sum of the series 1^2 + 2^2... = : ";
    cin>>number;

    sum = (number * (number + 1) * (2 * number + 1)) / 6;

    cout<<"\nThe sum of the series of "<<number <<" number : "<<sum<<endl;

    return 0;
}