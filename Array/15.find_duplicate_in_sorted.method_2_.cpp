#include<iostream>
using namespace std;
void findDuplicate(int arr[],int n){
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
for(int i=1;i<=max;i++){
    if(H[i]>1){
        cout<<i<<" repeates "<<H[i]<<" times"<<endl;
    }
}


cout<<endl;
}
int main(){
    int arr[9]={3,6,8,8,12,15,15,15,20};
    findDuplicate(arr,9);
    return 0;
}