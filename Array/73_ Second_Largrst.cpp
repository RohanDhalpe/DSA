//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	   if(arr[0]==arr[n-1]) return -1;
	   
	    set<int>s;
	    for(int i=0;i<n;i++){
	        s.insert(arr[i]);   //for storing unique elementts
	    }
	    
	    vector<int>v;
	     for(auto it =s.begin();it!=s.end();it++){
             v.push_back(*it);
	     }
	 
	    sort(v.begin(),v.end());
	    return v[v.size()-2];
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
