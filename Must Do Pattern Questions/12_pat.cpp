Input: 5

Output:
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
  
  //{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
       int space=2*(n-1);
       for(int i=1;i<=n;i++){
           for(int j=1;j<=i;j++){    //star
              cout<<j<<" ";
           }
           
           for(int j=1;j<=space;j++){
               cout<<"  ";
           }
           
            for(int j=i;j>=1;j--){    //star
              cout<<j<<" ";
            }
           cout<<endl;
           
           space=space-2;
       }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
