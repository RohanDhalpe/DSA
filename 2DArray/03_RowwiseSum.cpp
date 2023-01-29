#include<iostream>
using namespace std;
void rowwise_sum(int arr[3][3],int row,int col){
    cout<<"Rowwise sum is ";
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
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

   rowwise_sum(arr,3,3);
    
    return 0;
}
