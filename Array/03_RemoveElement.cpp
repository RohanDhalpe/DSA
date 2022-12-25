#include<iostream>
using namespace std;
//Function for delete element in an array

int deleteElement(int arr[],int n,int pos,int element){
    for(int i=pos;i<n;i++){
        arr[i-1]=arr[i];
    }
    return n-1;
}

int main(){
    int n=5;
    int arr[n]={7,14,21,28,35};
  
    cout<<"\nBefore insertion\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    n=deleteElement(arr,5,3,21);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    return 0;
}
