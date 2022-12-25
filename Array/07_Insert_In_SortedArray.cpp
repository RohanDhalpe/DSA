#include<iostream>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
   }cout<<endl;
}
//function for inserting in sorted array
void insertInSortedArray(int arr[],int n,int element){
    int k=n-1;
    while(arr[k]>element)
    {
      arr[k+1]=arr[k];
      k--;
    }
    arr[k+1]=element;
    n++;
}

int main (){
    int x;
    
    int arr[8]={2,6,8,9,14,19,23,28};
    cout<<"\nEnter the value:\n";
    cin>>x;

    cout<<"\n Before Inserting\n";
    printArray(arr,8);
   
   insertInSortedArray(arr,8,x);
   cout<<"\nAfter inserting\n";
   printArray(arr,9);

    return 0;
}
