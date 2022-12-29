class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0; 
        for(int i=1;i<n;i++)                                                       
        /* case 1 [4,5,6,1,2]
                       ^ ^    */
        if(nums[i-1]>nums[i]){ count++; }
        
        /* case 2 [1,2,3,4,5] 
        Here ,nums[n-1]>nums[0] */
        if(nums[n-1]>nums[0]){ count++; }

        /* case 3 [1,1,1,1]
        In such case count remains zero*/
        
        if(count<=1){
            return true;
        }else{
            return false;
        }
    }
};
