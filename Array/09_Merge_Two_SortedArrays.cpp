#include<iostream>
using namespace std;

// Function for Merging sorted  arrays
void mergeArrays(int arr[],int m,int brr[],int n,int crr[]){
int i=0,j=0,k=0;
  while (i<m && j<n)
  {   
    if(arr[i]<brr[j]){
        crr[k++]=arr[i++];
    }else{
        crr[k++]=brr[j++];
    }

    while(i<m){
        crr[k++]=arr[i++];
    }
    while(j<n){
        crr[k++]=brr[j++];
    }
    
//for printing result array crr    
    for(int i=0;i<10;i++){
        cout<<crr[i]<<" ";
    }cout<<endl;
}

  
}
int main(){
    int arr[5]={1, 2, 3, 4, 5};
    int brr[5]={6, 7, 8, 9, 10 };
     int crr[10];
    mergeArrays(arr,5,brr,5,crr);
    
    return 0;
}
