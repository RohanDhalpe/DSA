#include<iostream>
using namespace std;

void reverseArray(int arr[],int n)
{
    int start=0,end=n-1;
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
}

int main(){
    
    cout<<"\nBefore reversing array\n";
    int arr[7]={5,3,7,9,4,6,2};
    printarray(arr,7);
    
    cout<<"\nAfter reversing array\n";
    reverseArray(arr,7);
    printarray(arr,7);
    
    return 0;
}
