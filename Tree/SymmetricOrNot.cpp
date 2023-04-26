Given a Binary Tree. Check whether it is Symmetric or not, i.e. whether the binary tree is a Mirror image of itself or not.

Example 1:

Input:
         5
       /   \
      1     1
     /       \
    2         2
Output: True
Explanation: Tree is mirror image of
itself i.e. tree is symmetric
Example 2:

Input:
         5
       /   \
      10     10
     /  \     \
    20  20     30
Output: False
==================================================================================================================
class Solution {
private:
  bool isSymmetricHelp(TreeNode* left,TreeNode* right)
  {
       if(left==NULL || right==NULL){
           return left==right;
       }
       if(left->val!=right->val) return false;

       return isSymmetricHelp(left->left,right->right)
           && isSymmetricHelp(left->right,right->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
      return isSymmetricHelp(root->left,root->right);
    }
    
};
