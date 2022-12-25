#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
       if(i+1<n) swap(arr[i],arr[i+1]);
    }
}
int main(){
    int arr[8]={5,4,88,66,33,22,12,4};
    swapAlternate( arr,8);
    printArray(arr,8);
    return 0;
}
