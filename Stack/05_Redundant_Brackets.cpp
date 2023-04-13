Expression contains redundant bracket or not
MediumAccuracy: 41.91%Submissions: 9K+Points: 4
Unlock your coding potential - join our Hiring Coding Contest and land your dream job!  

Given a string of balanced expression, find if it contains a redundant parenthesis or not. A set of parenthesis are redundant if the same sub-expression is surrounded by unnecessary or multiple brackets. Print Yes if redundant, else No.
Note: Expression may contain + , - , *, and / operators. Given expression is valid and there are no white spaces present.
  
  
  //{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int checkRedundancy(string s) {
       stack<int> st;
       for(int i=0;i<s.length();i++)
       {
          char ch=s[i];
          if(ch==')')
          {
               if(st.top()=='(')
               {
                   return true;
                
               }else
               {
                   while(st.top()!='('){
                       st.pop();
                   }
                   st.pop();
               }
          }
          else
          {
            st.push(ch);  
          }
       }
      return 0; 
       
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    
        string s; 
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
