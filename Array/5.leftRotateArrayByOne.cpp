#include<iostream>
using namespace std;

void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}
//function to left rotate array element by one
void leftRotateByOne(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

int main(){
    int arr[6]={5,3,8,4,1,6};
    cout<<"\nbefore rotating\n";
    printArray(arr,6);
    leftRotateByOne(arr,6);
    cout<<"\nafter rotating\n";
    printArray(arr,6);

    return 0;
}
