
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    // number of times array totated is index of minimun element 
	    int low=0;
	    int high=n-1;
	    while(low<high){
	        int mid=(low+high)/2;
	        if(arr[mid]>arr[high]){
	            low=mid+1;
	        }else{
	            high=mid;
	        }
	    }
	    return low;
	}

};

