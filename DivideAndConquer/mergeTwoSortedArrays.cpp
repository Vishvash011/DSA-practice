#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,7};
    int brr[] = {2,4,6,8,10};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int brrSize = sizeof(brr)/sizeof(brr[0]);

    int sortedArray[arrSize + brrSize] = {0};

    int i = 0;
    int j = 0;

    int k = 0;
    while(i < arrSize && j < brrSize){
        if(arr[i] < brr[j]){
            sortedArray[k] = arr[i];
            i++;
            k++;
        }
        else{
            sortedArray[k] = brr[j];
            j++;
            k++;
        }
    }

    while(i < arrSize){
        sortedArray[k] = arr[i];
        i++;
        k++;
    } 

    while(j < brrSize){
        sortedArray[k] = brr[j];
        j++;
        k++;
    }

    for(int index = 0; index < arrSize+brrSize; index++){
        cout<<sortedArray[index] << " ";
    }
    return 0;
}