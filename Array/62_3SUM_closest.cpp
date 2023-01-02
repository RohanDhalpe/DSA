// Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

// Return the sum of the three integers.

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
     {   int n=nums.size();
         sort(nums.begin(),nums.end());
       
        int ans=0;
        int dif=INT_MAX;

        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int s=i+1;
            int e=n-1;

            while(s<e)
            {   int sum=a+nums[s]+nums[e];
                if((abs(target-sum))<dif){
                  dif=abs(target-sum); //Lesser the diff closest  will be the value
                  ans=sum;
                } 
                else if(sum>target) e--;
                else s++;
            }
        }
      return ans;
    }
};

 
