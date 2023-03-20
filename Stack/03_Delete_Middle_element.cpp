// Delete middle element of a stack
// EasyAccuracy: 53.71%Submissions: 66K+Points: 2
// Register NOW for the latest GFG Job-a-thon: Hiring Challenge !!  

// Given a stack with push(), pop(), empty() operations, delete the middle of the stack without using any additional data structure.
// Middle: ceil((size_of_stack+1)/2) (1-based index)
 

// Example 1:

// Input: 
// Stack = {1, 2, 3, 4, 5}
// Output:
// ModifiedStack = {1, 2, 4, 5}
// Explanation:
// As the number of elements is 5 , 
// hence the middle element will be the 3rd
// element which is deleted
// Example 2:

// Input: 
// Stack = {1 2 3 4}
// Output:
// ModifiedStack = {1 3 4}
// Explanation:
// As the number of elements is 4 , 
// hence the middle element will be the 2nd
// element which is deleted
 

// Your Task:
// You don't need to read input or print anything. Complete the function deleteMid() which takes the stack and its size as input parameters and modifies the stack in-place.
// Note: The output shows the stack from top to bottom.

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int N)
    {
         stack<int>st;
         int middle=N/2;
         int count=0;
         while(count<middle){
             st.push(s.top());
             s.pop();
             count++;
         }
         s.pop();
         while(!st.empty()){
             s.push(st.top());
             st.pop();
         }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)
