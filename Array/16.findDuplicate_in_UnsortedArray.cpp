#include<iostream>
using namespace std;
void findDuplicate(int arr[],int n){
    for(int i=0;i<n-1;i++)
    {   int count=1;
          if(arr[i]!=-1)
          {
               for(int j=i+1;j<n;j++)
               {
                 if(arr[i]==arr[j])
                 {
                  count++;
                  arr[j]=-1;
                  }
               }
               if(count>1)cout<<arr[i]<<"occures"<< count <<" times\n";
               
          }  
    }
}
int main(){
    int arr[10]={8,3,6,4,6,5,6,8,2,7};
    findDuplicate(arr,10);
    return 0;
}