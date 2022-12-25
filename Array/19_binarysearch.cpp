#include<iostream>
using namespace std;
int binarysearch(int ar[],int n,int key)
{
    int start=0;
    int end=n-1;
   
  
    while(start<=end)
    {
      int mid=(start+end)/2;
     if(key==ar[mid]){
        return mid;
     }else if(key<mid){
        end=mid-1;
     }else{
        start=mid+1;
     }
      
       
        
    } return -1;
    cout<<endl;
}
int main(){
    int result;
    int arr[10]={2,4,6,8,10,12,14,18,20,22};
    int brr[7]={4,6,9,11,56,25,26};
   result=binarysearch(arr,10,22);
   cout<<result;
    return 0;
}
