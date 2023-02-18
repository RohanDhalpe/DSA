#include<iostream>
using namespace std;

bool linearSearch(int arr[],int target,int n){
    if(n==0)return false;
    if(arr[0]==target){
        return 1;
    }
       return  linearSearch(arr+1,target,n-1);
    

}
int main(){
    int arr[5]={5,63,78,1,96};
   bool k= linearSearch(arr,55,5);
   if(k) cout<<"ok";
   else{
    cout<<"NO";
   }
    return 0;
}
