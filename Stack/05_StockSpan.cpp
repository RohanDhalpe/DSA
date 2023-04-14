//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {  
       vector<int>res;
       int *ans=new int[n];
       ans[0]=1;
       stack<int>s;
       s.push(0);
       
       for(int i=1;i<n;i++)
       {
           while(!s.empty() && price[i]>=price[s.top()]){
               s.pop();
           }
           
           if(s.empty()){
               ans[i]=i+1;
           }else{
             ans[i]=i-s.top();
           }
           s.push(i);
          
       }
       
       
       for(int i=0;i<n;i++){
           res.push_back(ans[i]);
       }
       return res;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends
