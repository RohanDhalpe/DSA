class Solution {
private:
   int digiSum(int n){
       int sum=0;
       while(n!=0){
           int dig=n%10;
           sum+=dig;
           n=n/10;
       }
       return sum;
   }
public:
    int differenceOfSum(vector<int>& nums) {
        int elesum=0;
        for(int i=0;i<nums.size();i++){
            elesum+=nums[i];
        }
        
        int digitsum=0;
        for(int i=0;i<nums.size();i++){
          digitsum+=digiSum(nums[i]);
        }
        return abs(digitsum-elesum);

    }
};
