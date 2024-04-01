// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int &ptr = a;
//     cout<<"value of ptr is : "<<ptr+1<<endl;
//     cout<<"value of a : "<<a<<endl;
//     ptr+=1;
//     cout<<"value of a : "<<a<<endl;
//     cout<<"value of ptr is : "<<ptr<<endl;

//     return 0;
// }




#include <iostream>  
using namespace std;  
int main()  
{  
    try
    {
       int x=11; // variable initialization  
       int z=67;  
       int &y=x; // y reference to x  
    //    int &y=z; // y reference to z, but throws a compile-time error.  
    }
    catch(const exception& e)
    {
        cerr <<"solve error"<< e.what() << '\n';
    }
    return 0;
}  