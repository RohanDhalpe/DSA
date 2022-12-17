class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
        vector<int> ans;
        set<int>s;
        for(int i=0;i<nums1.size();i++){
          s.insert(nums1[i]);
        }

        set<int>intersection;
        for(int i=0;i<nums2.size();i++){
            if(s.find(nums2[i])!=s.end()){
                intersection.insert(nums2[i]);
            }
        }

        for(auto x:intersection){
            ans.push_back(x);
        }
        
    return ans;
        
    }
};
