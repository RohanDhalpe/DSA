#include<iostream>
using namespace std;

//Function for printing array
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
    }
}

// Function for intersection of array
int  intersectionArray(int arr[],int m,int brr[],int n,int crr[]){
   int i,j,k;
   i=j=k=0;

   while (i<m && j<n)
   {
       if(arr[i]<brr[j]){
       i++;
       }
       else if(arr[i]>brr[j]){
        j++;
       }else{
        crr[k++]=arr[i++];
        j++;
       }
   }
   return k;
}
int main(){
    int arr[5]={2,6,10,15,25};
    int brr[5]={3,6,7,15,20};
    int crr[10];

    int k= intersectionArray(arr,5,brr,5,crr);
    printArray(crr,k);
    return 0;
}
