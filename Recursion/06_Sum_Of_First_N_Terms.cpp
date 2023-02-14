class Solution {
  public:
    long long sumOfSeries(long long N) {
        if(N==0) return 0 ;
        return N*N*N + sumOfSeries(N-1);
        
    }
};
