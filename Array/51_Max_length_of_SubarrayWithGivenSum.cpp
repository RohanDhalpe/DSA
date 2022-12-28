int lenOfLongSubarr(int arr[], int N, int K)
{
 
    int i = 0, j = 0, sum = 0;
    int maxLen = INT_MIN;
   
    while (j < N) {
        sum += arr[j];  //calculation
        if (sum == K) {
          maxLen = max(maxLen, j-i+1);     //taking results
            j++;
        }
        else if (sum < K) {    //adjusting window
            j++;
        }
        else if (sum > K) {     //adjusting window
            while (sum > K) {
                sum -= arr[i];
                 i++;
            }
              if(sum == K){
              maxLen = max(maxLen, j-i+1);
            }
            j++;
        }
    }
    return maxLen;
}
