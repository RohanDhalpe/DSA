Given the adjacency list of a bidirectional graph. Your task is to copy/clone the adjacency list for each vertex and return a new list.


Example 1:

Output: 
0-> 1-> 4 
1-> 0-> 2-> 3-> 4 
2-> 1-> 3 
3-> 1-> 2-> 4 
4-> 0-> 1-> 3
Explanation:
As 0,1 and 3 is connected to 4 so 4th row
of the list containing 4 and its connected
nodes 0,1 and 3 and we have to add those in
sorted order and same for every row.
  -------------------------------------------------------------------------------------------------------------------------------------------------
  class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        vector<vector<int>>ans;
        
        for(int i=0;i<V;i++)
        {  
            vector<int>row;
            row.push_back(i);
            for(auto it:adj[i])
            {
               row.push_back(it);
            }
            ans.push_back(row);
        }
        return ans;
    }
};
