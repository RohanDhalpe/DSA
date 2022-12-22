class Solution {
public://*******************Similar to Book Allocation**********************//
    bool possibleDays(vector<int>& weights, int m, int days)
    {
        int tempdays=1;
        int weight_sum=0;
        for(int i=0; i<weights.size(); i++)
        {
            weight_sum=weight_sum+weights[i];
            if(weight_sum>m)
            {
                tempdays++;
                weight_sum = weights[i];
            }
        }
        if(tempdays<=days)
            return true;
            return false;
    }

    int shipWithinDays(vector<int>& weights, int days) {
       int low=*max_element(weights.begin(),weights.end());
       int high=accumulate(weights.begin(),weights.end(),0);
       
       int ans=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(possibleDays(weights, mid, days))
            {
                ans=mid;
                high = mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};
