#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution{
    public:
    vector<int>nextGreaterElements(vector<int>&arr)
    {    int n=arr.size();
         stack<int>st;
         st.push(-1);
         vector<int>res(n);
         
         for(int i=n-1;i>=0;i--)
         {  
             while(st.top()!=-1 && st.top()<=arr[i])
             {
                  st.pop();
             }
             res[i]=st.top();
             st.push(arr[i]);
         }
        return res;
    }
};

int main() {
  Solution obj;
  vector < int > v {5,7,1,2,6,0};
  vector < int > res = obj.nextGreaterElements(v);
  cout << "The next greater elements are" << endl;
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }
}
