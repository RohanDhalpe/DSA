#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}

void negativeOnOneSidePositiveOnAnotherSide(int arr[],int n)
{ int i=0,j=8;
    while(i<=j)
    {    while(arr[i]<0) i++;
         while(arr[j]>=0) j--;
         if(i<=j){
            swap(arr[i],arr[j]);
         }
    }
}   

int main(){
    int arr[9]={-3,5,7,-15,-1,6,-77,32,-85};
   cout<<"\n before updating\n";
   printArray(arr,9);
   cout<<endl;

  cout<<"\nAfer updating\n";
   negativeOnOneSidePositiveOnAnotherSide(arr,9);
    printArray(arr,9);

    return 0;
}
