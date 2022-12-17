class Solution
 {
public:
    vector<int> twoSum(vector<int>& nums, int t)
     {  int n=nums.size();
         vector<pair<int,int>>v;
         for(int i=0;i<n;i++){
             v.push_back({nums[i],i});
         }
         sort(v.begin(),v.end());
         int s=0;
         int e=n-1;
         while(s<e)
         {   int  sum=v[s].first+v[e].first;
             if(sum==t){
             return {v[s].second,v[e].second};
             }else if(sum>t) e--;
             else s++;
         }
         
     return {-1,-1} ; 

     }

   //simple brute force with O(N^2)  and O(1)
    //    for(int i=0;i<n;i++){
    //        for(int j=i+1;j<n;j++){
    //            if(nums[i]+nums[j]==t){
    //                return {i,j};
    //            }
    //        }
    //    }
    //    return {-1,-1};
    //  }
    
};
