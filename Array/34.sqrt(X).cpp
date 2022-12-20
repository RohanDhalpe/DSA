class Solution {
public:
    int mySqrt(int x) {
       if(x==1)return true;
        int low=1;
        int high=x/2;
       
        while(low<=high){
            int mid=(low +high)/2;
            if(mid==x/mid){
               return mid;
            }
            else if(mid>(x/mid))high=mid-1;
            else low=mid+1;
        }
        return high;
    }
};
