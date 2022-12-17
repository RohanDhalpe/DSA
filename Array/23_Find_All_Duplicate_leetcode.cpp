class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int>result;
       sort(nums.begin(),nums.end());

       if(nums.size() <2){
           return result;
       }

       for(int i=1;i<nums.size();i++){
           if(nums[i]==nums[i-1])
           {
              result.push_back(nums[i]);
           }
       }
       
       return result;
    }
};
