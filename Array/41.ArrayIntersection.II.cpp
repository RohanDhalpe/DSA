class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
       //for storing multiple values
       multiset<int>s;// [1,2,2,1]
        for(auto val:nums1){
                s.insert(val);
        }

       for(auto it:nums2 ){
            if(s.count(it)){
                ans.push_back(it);
                s.erase(s.find(it));
            }
        }
       return ans; 
    }
};
