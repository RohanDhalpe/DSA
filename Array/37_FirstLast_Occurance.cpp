class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        //for searching the element in array nums.
        auto check_bs=binary_search(nums.begin(),nums.end(),target);
        
        //if element is present in array
        if(check_bs){
             auto it1=(lower_bound(nums.begin(),nums.end(),target))-nums.begin();//first occurance
            auto it2=(upper_bound(nums.begin(),nums.end(),target))-nums.begin()-1;//last occurance
            ans.push_back(it1);
            ans.push_back(it2);
        }// if not present in array
        else{
             ans.push_back(-1);
             ans.push_back(-1);
        }
        
      return ans;  
    }
};
