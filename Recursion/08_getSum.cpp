#include<iostream>
using namespace std;

int getSum(int arr[],int size){
    if(size==0) return 0;
    if(size==1) return arr[0];

    int sum=arr[0];
    int remaining=getSum(arr+1,size-1);
    return sum+remaining;

}


int main(){
    int arr[6]={5,5,5,5,5,5};
   int k= getSum(arr,6);
   cout<<k;
    return 0;
}
