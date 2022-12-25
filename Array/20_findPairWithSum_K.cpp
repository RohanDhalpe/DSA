#include<iostream>
using namespace std;

void findPair(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
               cout <<arr[i]<<"+"<<arr[j]<<"="<<k<<endl;
            }
        }
    }
}

int main(){
    int arr[9]={6,8,4,5,2,3,7,9,1};
    findPair(arr,9,10);
    
    return 0;;
}
