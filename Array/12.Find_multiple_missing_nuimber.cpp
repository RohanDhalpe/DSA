#include<iostream>
using namespace std;
//program for finding  multiple missing number in sorted array
void  missingNumber(int arr[],int n){
    int diff=6;
    for(int i=0;i<n;i++){
        if(arr[i]-i!=diff)
        {
            while(diff<arr[i]-i)
            {
            cout<<i+diff<<" ";
            diff++;
            }
        }
    }

}
int main(){
    int arr[6]={6,8,9,12,13,14};
    missingNumber(arr,6);
    return 0;
}