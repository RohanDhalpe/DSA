// Given an array of integers in[] representing inorder traversal of elements of a binary tree. Return true if the given inorder traversal can be of a valid Binary Search Tree.

// Note - All the keys in BST must be unique

 

// Example 1:

// Input: in = [8, 14, 45, 64, 100]
// Output: True
// Example 2:

// Input: in[] = [5, 6, 1, 8, 7]
// Output: False
 

// Your Task:

// Complete the function isBSTTraversal() which takes an integer array in[] as input and return true if the traversal represents a BST.

 

// Expected Time Complexity: O(n)

// Expected Space Complexity: O(1)

class Solution {
  public:
    bool isBSTTraversal(vector<int>& nums) {
       for(int i=1;i<nums.size();i++){
           if(nums[i-1]>=nums[i]){
               return false;
           }
       }
       return true;
    }
};

 
