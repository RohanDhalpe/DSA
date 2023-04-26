// Given a Binary Tree. Find the Zig-Zag Level Order Traversal of the Binary Tree.

 

// Example 1:

// Input:
//         1
//       /   \
//      2     3
//     / \   /  \
//    4   5 6    7
// Output:
// 1 3 2 4 5 6 7
// Example 2:

// Input:
//            7
//         /     \
//        9       7
//      /  \     /   
//     8    8   6     
//    /  \
//   10   9 
// Output:
// 7 7 9 8 8 6 9 10 
  
  
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL){
            return res;
        }
        
        queue<TreeNode*>q;
        q.push(root);
        
        bool LeftToRight=true;

        while(!q.empty()){
            int size=q.size();
            vector<int>level(size);

            for(int i=0;i<size;i++)
            {
                TreeNode* node=q.front();
                q.pop();

                //position to fill node
                int index = (LeftToRight) ? i :(size-1-i);
                level[index]= node->val;

                if(node->left) {  q.push(node->left);  }
                if(node->right){ q.push(node->right);  }
            }

            LeftToRight=!LeftToRight;
            res.push_back(level);
        }
        return res;
    }
};
