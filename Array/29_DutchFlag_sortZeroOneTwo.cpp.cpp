#include<bits/stdc++.h>
using namespace std;
 void sort_zeroOneTwo(vector<int>& arr){
        int n=arr.size();
        int low=0;
        int mid=0;
        int high=n-1;

        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[mid],arr[low]);
                mid++;
                low++;
            }else if(arr[mid]==1) mid++;
            else if(arr[mid]==2){
                swap(arr[mid],arr[high]);
                high--;
            }
        }
 }
int main(){
    vector<int> arr={1,0,2,2,1,2,0,1,2};
    sort_zeroOneTwo(arr);
    return 0;
}
