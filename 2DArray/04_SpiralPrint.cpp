#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>ans;

    for(int i=0;i<mCols;i++){
       if(i&1)
       {
           for(int j=nRows-1;j>=0;j--){
               ans.push_back(arr[j][i]);
           }
       }
       else{
          for(int k=0;k<nRows;k++){
               ans.push_back(arr[k][i]);
           }  
       }
    }
    return ans;
}
