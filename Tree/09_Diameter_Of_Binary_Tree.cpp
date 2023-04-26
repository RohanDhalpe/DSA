 Diameter of Binary Tree

Given the root of a binary tree, return the length of the diameter of the tree.

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

The length of a path between two nodes is represented by the number of edges between them.


class Solution {
private:
    int Height(TreeNode* root,int &diameter){
        if(root==NULL){return 0;} 

        int LH=Height(root->left,diameter);
        int RH=Height(root->right,diameter);
        diameter=max(diameter,LH+RH);
        return 1 + max(LH,RH);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
       int diameter=0;
       Height(root,diameter) ;
       return diameter;
    }
};
  
  
  
