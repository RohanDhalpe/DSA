#include<iostream>
using namespace std;
//program for finding multiple mmissing number in unsorted array
void multiMissing(int arr[],int n){
 int max=arr[0];
 for(int i=-0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
 }
 int H[max];
 for(int i=1;i<=max;i++){
    H[i]=0;
 }

for(int i=0;i<n;i++){
    H[arr[i]]++;
}

for(int i=1;i<max;i++){
    if(H[i]==0){
    cout<<i<<" ";
    }
}
cout<<endl;

}
int main(){
    int arr[10]={3,7,4,9,12,6,1,11,2,10};
    multiMissing(arr,10);
    return 0;
}
  
