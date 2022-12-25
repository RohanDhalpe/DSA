//Array Intersection in Which array containing multiple Duplicates
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
       //for storing multiple values
       multiset<int>s;
        for(auto val:nums1){
                s.insert(val);
        }
        
       for(int i=0;i<nums2.size();i++){
            if(s.find(nums2[i])!=s.end()){
                ans.push_back(nums2[i]);
                s.erase(s.find(nums2[i]));
            }
        }
       return ans; 
    }
};
