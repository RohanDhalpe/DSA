class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high){
                                   //[ 4,5,6,7,0,1,2 ]
        while(low<high)
        {         //   [------][l    h]
            int mid=(low+high)/2;
            if(arr[mid]>arr[high]){
                low=mid+1;
            }else {
                high=mid;
            }
        }
      return arr[high]; //or return arr[low]  as arr[high]==arr[low]
    }
};
