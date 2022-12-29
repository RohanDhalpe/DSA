class Solution {
public:
    int findSpecialInteger(vector<int>& nums) {
       int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {   mp[nums[i]]++;
            if(mp[nums[i]]>(n/4)){
                return nums[i];
            }
        }
        return -1;
    }
};
