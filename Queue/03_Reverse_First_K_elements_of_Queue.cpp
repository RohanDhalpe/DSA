// Example 1:

// Input:
// 5 3
// 1 2 3 4 5

// Output: 
// 3 2 1 4 5

// Explanation: 
// After reversing the given
// input from the 3rd position the resultant
// output will be 3 2 1 4 5.

// Example 2:

// Input:
// 4 4
// 4 3 2 1

// Output: 
// 1 2 3 4

// Explanation: 
// After reversing the given
// input from the 4th position the resultant
// output will be 1 2 3 4.
// Your Task:
// Complete the provided function modifyQueue that takes queue and k as parameters and returns a modified queue. The printing is done automatically by the driver code.

// Expected Time Complexity : O(N)
// Expected Auxiliary Space : O(K)

// Constraints:
// 1 <= N <= 1000
// 1 <= K <= N

// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    stack<int>s;
    for(int i=0;i<k;i++){
        int ele=q.front();
        q.pop();
        s.push(ele);
    }
    
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    
    int t=q.size()-k;
    while(t--){
        int top=q.front();
        q.push(top);
        q.pop();
    }
    
 return q;
}
