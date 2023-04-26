Given a Binary Tree, find its Boundary Traversal. The traversal should be in the following order: 

Left boundary nodes: defined as the path from the root to the left-most node ie- the leaf node you could reach when you always travel preferring the left subtree over the right subtree. 
Leaf nodes: All the leaf nodes except for the ones that are part of left or right boundary.
Reverse right boundary nodes: defined as the path from the right-most node to the root. The right-most node is the leaf node you could reach when you always travel preferring the right subtree over the left subtree. Exclude the root from this as it was already included in the traversal of left boundary nodes.
Note: If the root doesn't have a left subtree or right subtree, then the root itself is the left or right boundary. 

Example 1:

Input:
        1 
      /   \
     2     3  
    / \   / \ 
   4   5 6   7
      / \
     8   9
   
Output: 1 2 4 8 9 6 7 3
//////////////////////////////////////////////
Example 2:

Input:
            1
           /
          2
        /  \
       4    9
     /  \    \
    6    5    3
             /  \
            7     8

Output: 1 2 4 6 5 7 8

  
  //{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}









// } Driver Code Ends
//

class Solution {


   bool isLeaf(Node* root)
   {
      if(root->left || root->right){
        return false;
      }
     return true;
   }
   
   void addLeftBoundary(Node* root, vector<int>&res)
   {
       Node* curr=root->left;
       while(curr)
       {  
           if(!isLeaf(curr)){ res.push_back(curr->data); }
           if(curr->left) curr=curr->left;
           else curr=curr->right;
       }
   }
   
   void addRightBoundary(Node* root, vector<int>&res)
   {
       vector<int>temp;
       Node* curr=root->right;
       while(curr){
           if(!isLeaf(curr)){ temp.push_back(curr->data); }
           if(curr->right) curr=curr->right;
           else curr=curr->left;
       }
       
       for(int i=temp.size()-1;i>=0;--i){
           res.push_back(temp[i]);
       }
   }
   
    void addLeaves(Node* root, vector<int>&res)
    {
       if(isLeaf(root)){
           res.push_back(root->data);
           return;
       }
       
       if(root->left)addLeaves(root->left,res);
       if(root->right) addLeaves(root->right,res);
   }
   
public:
    vector <int> boundary(Node *root)
    {
       vector<int> res;
       if(root==NULL){
           return res;
       }
       
       if(!isLeaf(root)) { res.push_back(root->data);}
       addLeftBoundary(root,res);
       addLeaves(root,res);
       addRightBoundary(root,res);
       return res;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        vector <int> res = ob.boundary(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
