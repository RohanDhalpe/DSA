
// #include<iostream>
// using namespace std;
// //Program for findind  single missing number in a sequence .
// void missingNumber(int arr[],int n){
//   int sum=0;
//   for(int i=0;i<n;i++){
//     sum=sum+arr[i];
//   }
//   int sum_upto_n=(9*(10))/2;
//   cout<<sum_upto_n-sum;
// }
// int main(){
//     int arr[8]={1,2,3,5,6,7,8,9};
//     missingNumber(arr,8);
    

//     return 0;
// }





#include<iostream>
using namespace std;
//program for finding missing number
void missingNumber(int arr[],int n){
    int diff=6;
    for(int i=0;i<n;i++){
        if(arr[i]-i!=diff){
          cout<< i+diff;
            break;
        }
    }

}

int main(){
    int arr[8]={6,7,8,9,10,11,13,14};
    missingNumber(arr,8);
    

    return 0;
}