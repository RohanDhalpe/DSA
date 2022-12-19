class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {    vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
         int n=nums.size();
         for(int i=0;i<n;i++){
             int a=nums[i]; //a+b+c=0
             int t=-a;      //b+c=-a
             int s=i+1,e=n-1;
             while(s<e){
                 if(nums[s]+nums[e]==t)
                 {
                     ans.push_back({nums[i],nums[s],nums[e]});
                     while(s<e && nums[s]==nums[s+1])s++; //(for two same 
                     while(s<e && nums[e]==nums[e-1])e--; // element)
                     s++;
                     e--;
                 }else if(nums[s]+nums[e]>t)e--;
                  else s++;
             }
             while( i+1<n && nums[i]==nums[i+1]) i++;
             //if two same element in nums[] array
         } 
         return ans;
    } 
};
