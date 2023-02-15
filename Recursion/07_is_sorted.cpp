#include<iostream>
using namespace std;

bool is_sorted(int arr[],int size){
   if(size<=0) return false;
   if(arr[0]>arr[1]) return false;
   bool ans=is_sorted(arr+1, size-1);
   return ans;
}

int main(){
    int arr[6]={5,6,7,8,9,1};

    if(is_sorted(arr,6)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
