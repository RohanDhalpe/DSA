#include<iostream>
using namespace std;
bool LinearSearch(int arr[3][3],int row,int col,int x){
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
           if(arr[row][col]==x){
            return 1;
           }
        }
        return 0;
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
    int x;
    cout<<"Enter element:"<<endl;
    cin>>x;
    
    if(LinearSearch(arr,3,3,x)){
        cout<<"Found";
    }else{
        cout<<"Not Found";
    }
    return 0;
}
