//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int low, int mid, int high)
    {   //[low      mid]
        //               [mid+1   high]
        int i=low;
        int j=mid+1;
        
        vector<int>ans;
        
        while(i<=mid && j<=high){
            
            if(arr[i]<arr[j]){
                ans.push_back(arr[i++]);
            }else{
                ans.push_back(arr[j++]);
            }
        }
        
        while(i<=mid){
            ans.push_back(arr[i++]);
        }
        while(j<=high){
             ans.push_back(arr[j++]);
        }
        

        for(int k=low, j=0;k<=high;k++){
            arr[k]=ans[j++];
        }
        
      
    }
    public:
    void mergeSort(int arr[], int low, int high)
    {   if(low>=high) return;
    
        int mid=(low+high)/2;
       
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        
        merge(arr,low,mid,high);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends
