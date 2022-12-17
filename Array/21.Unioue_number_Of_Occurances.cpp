class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
          vector<int>ans;
          int size=arr.size();
          sort(arr.begin(),arr.end());
          int i=0;
          while(i<size)
        {   int count=1;
            
            for(int j=i+1;j<size;j++)
            {   if(arr[i]==arr[j]){
                    count++;
                }else{
                    break;
                }
            }
            ans.push_back(count);
            i=i+count;
        }
        size=ans.size();
        sort(ans.begin(),ans.end());
        for(int i=0;i<size-1;i++)
        {
            if(ans[i]==ans[i+1]){
                return false;
            }
        }
        return true;
    }
};
//////////////////////////////////////////////////////////////////////////////////////
// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {
//         unordered_map<int,int>mp;
        
// //         Store the frequecny.
//         for(auto num:arr){
//             mp[num]++;
//         }
        
// //         check the count and insert in unordered set.
//         unordered_set<int>set;
        
//         for(auto it:mp){
//             int freq = it.second;
//             set.insert(freq);
//         }
        
// //         if size of mp is same as set that means all have unique freq.
//         return set.size() == mp.size();
        
//     }
// };
