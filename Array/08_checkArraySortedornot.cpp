#include<iostream>
using namespace std;

int checkSortedornot(int arr[],int n)
{
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
         return 1;
        }
    }return 0; 
}

int main(){
    int arr[8]={7,9,11,13,15,12,88,89};
    int k=checkSortedornot(arr,8);
   if(k==0) cout<<"soretd";
   else cout<<"not sorted";
    return 0;
}
