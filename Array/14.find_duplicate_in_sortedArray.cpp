#include<iostream>
using namespace std;

// Program for finding duplicates in sorted array
void findDuplicate(int arr[],int n){
    int lastDuplicate=0;
    for(int i=0;i<n-1;i++){
            if((arr[i]==arr[i+1]) && arr[i]!=lastDuplicate){
                cout<<arr[i]<<" ";
                lastDuplicate=arr[i];
            }
    }
}

int main(){
    int arr[10]={3,6,8,8,10,15,15,15,20};
    findDuplicate(arr,10);
    return 0;
}