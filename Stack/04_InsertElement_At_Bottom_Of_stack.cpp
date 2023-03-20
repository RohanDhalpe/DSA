#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{   
    vector<int>v;
     int q=myStack.size();
    for(int i=0;i<q;i++)
    {
       v.push_back(myStack.top());
       myStack.pop();
       
    }
    
    myStack.push(x);
    int w=v.size();

    for(int i=w-1;i>=0;i--){
        myStack.push(v[i]);
    }
  return myStack;
}
