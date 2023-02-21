
// 78. Subsets

// Given an integer array nums of unique elements, return all possible 
// subsets
//  (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

 

// Example 1:

// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

class Solution {
private:
void printSubset(vector<int>nums,vector<int>output,int ind,vector<vector<int>> &ans){
    if(ind>=nums.size()){
       ans.push_back(output);
        return;
    }
    //exclude
    printSubset(nums,output,ind+1,ans);

    //include
    int element=nums[ind];
    output.push_back(element);
    printSubset(nums,output,ind+1,ans);

}

public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>ans;
       vector<int>output;
       int ind=0;
       printSubset(nums,output,ind,ans); 
       return ans;
    }
};
