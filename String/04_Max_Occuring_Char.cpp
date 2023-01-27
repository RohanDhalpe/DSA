Input:
str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency.
Example 2:

Input:
str = output
Output: t
Explanation:  t and u are the characters
with the same frequency, but t is
lexicographically smaller.
---------------------------------------------------------------------------------------------------------------------------------------------------------  
  
        
 //{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {   vector<int>arr(26,0);
        for(int i=0;i<str.size();i++){
          int ans=0;
          ans=str[i]-'a';
          arr[ans]++;
        }
        
        int max=-1;
        int ans;
        for(int i=0;i<arr.size();i++){
             if(arr[i]>max){
                max=arr[i];
                ans=i;
            }
        }
        char x=ans+'a';
        return x;
       
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
