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

//function to left rotate array element by d
void leftRotateBy_d(int arr[],int n,int d){
    for(int i=0;i<d;i++)
    {
        leftRotateByOne(arr, n);
    }
}

int main(){
    int arr[6]={5,3,8,4,1,6};
    cout<<"\nbefore rotating\n";
    printArray(arr,6);
    leftRotateBy_d(arr,6,3);
    cout<<"\nafter rotating\n";
    printArray(arr,6);

    return 0;
}
