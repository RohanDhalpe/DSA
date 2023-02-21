class Solution {
public:
    int subtractProductAndSum(int n) {
       int prod=1;
       int sum=0;
       while(n!=0) {
           int dig=n%10;
           sum+=dig;
           prod=prod*dig;
           n=n/10;
       }
       return prod-sum;
    }
};
