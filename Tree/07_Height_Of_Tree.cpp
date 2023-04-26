// class Solution {
// public:
//     int maxDepth(TreeNode* root) 
//     {
//         if(root==NULL) return 0;
        
//          queue<TreeNode*> q;
//          q.push(root);
//          int depth=0;

//          while(!q.empty())
//          {  
//              int size=q.size();
//              for(int i=0;i<size;i++)
//              { 
//                  TreeNode* node=q.front();
//                  q.pop();
//                  if(node->left)q.push(node->left);
//                  if(node->right)q.push(node->right);
//              }
//             depth++;
//          }
//       return depth;
//     }
// };


class Solution{
    public:
    
    int height(struct Node* node){
        if(node==NULL){
            return 0;
        }
        int lh= height(node->left);
        int rh= height(node->right);
        
        return 1+max(lh,rh);
    }
};
