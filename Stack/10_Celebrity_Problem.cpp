//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>s;
        for(int i=0;i<n;i++)
        {
           s.push(i); 
        }
        
        while(s.size()>1)
        {
            int a=s.top();
            s.pop();
            
            int b=s.top();
            s.pop();
            
            if(M[a][b]==1)
            {
                s.push(b);
            }else{
                s.push(a);
            }
        }
        
        int cel=s.top();
        
        int zerocnt=0;
        int onecnt=0;
        
        for(int i=0;i<n;i++)
        {
             if(M[cel][i]==0){
                 zerocnt++;
             }
              if(M[i][cel]==1){
                onecnt++;
            }
        }
        
        if(zerocnt==n && onecnt==n-1)
        {
            return cel;
        }
        
      return -1; 
        
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
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends
