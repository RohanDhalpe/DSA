class Solution {
public:
    bool isPossible(vector<int>& nums,int mid,int k){
              int subarray=1;
              int subarr_sum=0;
              for(int i=0;i<nums.size();i++){
                  subarr_sum=subarr_sum+nums[i];
                  if(subarr_sum >mid){
                      subarray++;
                      subarr_sum=nums[i];
                  }
              }
          return subarray<=k;

    }
    int splitArray(vector<int>& nums, int k) 
    {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int ans=0;

        while(low<=high){
            int mid=(low+high)/2;
            if(isPossible(nums,mid,k)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
       return ans; 
    }
};
