
#include<iostream>
using namespace std;
//Function to search element in an array
int search(int arr[],int n,int x)
{    
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }

};
int main(){
    int x=5;
    int arr[]={1,2,0,7,2,9,3,1,5,201,2,65};
    
    cout<<" X element found at index :"<<search(arr,12,x);
    return 0;
}
