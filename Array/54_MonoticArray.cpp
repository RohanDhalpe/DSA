class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int increaseCount=1;
        int decreaseCount=1;

        for(int i=1;i<n;i++)
        {
           if(nums[i-1]<=nums[i]){
               increaseCount++;
           }
        }

        for(int i=1;i<n;i++){
            if(nums[i-1]>=nums[i]){
                decreaseCount++;
            }
        }

        if(increaseCount==n || decreaseCount==n){
            return true;
        }else{
            return false;
        }
    }
};
