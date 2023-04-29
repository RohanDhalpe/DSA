Given a Binary Tree of size N, you need to find all the possible paths from root node to all the leaf node's of the binary tree.

Example 1:

Input:
       1
    /     \
   2       3
Output: 1 2 #1 3 #
Explanation: 
All possible paths:
1->2
1->3

Example 2:

Input:
         10
       /    \
      20    30
     /  \
    40   60
Output: 10 20 40 #10 20 60 #10 30 #
---------------------------------------------------------------------------------------------------------------------------------------------------------------------

void getPath(Node* root,vector<int>path,vector<vector<int>> &ans)
{     
    if(!root){
      return;
    }
    
    path.push_back(root->data);
    
    if(root->left==NULL && root->right==NULL){
        ans.push_back(path);
    }
    getPath(root->left,path,ans);
    getPath(root->right,path,ans);
    
}


vector<vector<int>> Paths(Node* root)
{
    vector<vector<int>>ans;
    if(root==NULL) return ans;
    
    vector<int> path;
    getPath(root,path,ans);
    return ans;
    
}
