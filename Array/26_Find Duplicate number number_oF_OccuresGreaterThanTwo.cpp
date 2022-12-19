
//  26_Find Duplicate number number_oF_OccuresGreaterThanTwo.cpp
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
      vector<int>ans;
      sort(arr,arr+n);
      for(int i=0;i<=n-1;i++)
      {
          if(arr[i]==arr[i+1]){
              ans.push_back(arr[i]);
          }
       }
       if(ans.size()==0)
       {  ans.push_back(-1);
           return ans;
        }
        else
        {   ans.erase(unique(ans.begin(),ans.end()),ans.end()); //to remove duplicate elements
           return ans;
        }
    }
};
