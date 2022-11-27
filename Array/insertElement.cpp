#include<iostream>
using namespace std;

//function  for inserting element in array
int insertElement(int arr[],int n,int pos,int x){
    
    for(int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=x; 
    return n+1;
}

int main(){
    int n=6;
    int arr[n]={1,5,20,3,7,8};
    
    cout<<"\nBefore Insertion\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
     n=insertElement(arr,6,2,4);
     cout<<"New value of n becomes"<<n<<endl;
    
    
    cout<<"\nAfter insertion\n";
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }
    return 0;
}
