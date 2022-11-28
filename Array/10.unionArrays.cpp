#include<iostream>
using namespace std;
//function for printing arrays
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


//Function for union of two arrays
int  arrayUnion(int arr[],int m,int brr[],int n,int crr[])
{   int i,j,k;
     i=j=k=0;
    while(i<m && j<n)
    {
        if(arr[i]<brr[j]){
            crr[k++]=arr[i++];
        }
        else if(arr[i]>brr[j]){
            crr[k++]=brr[j++];
        }
        //for Two arrays havinf same element
        else{
            crr[k++]=arr[i++];
            j++;
        }
    }
    
    while(i<m){
        crr[k++]=arr[i++];
    }
    while(j<n){
        crr[k++]=brr[j++];
    }
     
     return k;
  
}

int main(){
    int arr[5]={2,6,10,15,25};
    int brr[5]={3,6,7,15,20};
    int crr[10];
   int k= arrayUnion(arr,5,brr,5,crr);
   print(crr,k);
    return 0;
}
