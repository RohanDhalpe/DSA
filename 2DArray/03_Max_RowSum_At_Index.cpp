#include<iostream>
using namespace std;
int Maxrowwise_sum(int arr[3][3],int row,int col){
   int max=-1;
   int rowInd=-1;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>max){
            max=sum;
            rowInd=i;
        }
    }
    return rowInd;
}

int main(){
    int arr[3][3];
    cout<<"Enter the elements:"<<endl;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
           cin>>arr[row][col];
        }
    }

    cout<<"Printing the elements:"<<endl;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
           cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

   cout<<Maxrowwise_sum(arr,3,3)<<endl;
    
    return 0;
}