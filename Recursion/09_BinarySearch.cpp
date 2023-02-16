#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e,int target){
    if(s>e){
        return false;
    }
    int mid=(s+e)/2;
    if(arr[mid]==target){
        return true;
    }
    
    if(arr[mid]<target){
     binarySearch( arr,mid+1,e,target);
    }else{
        binarySearch( arr,s,mid-1,target);
    }
}
int main(){
    int arr[6]={5,6,7,9,11,56};
    bool k=binarySearch(arr,0,5,45);
    if(k){
        cout<<"Found";
    }else{
        cout<<"Not Found";
    }
    return 0;
}
