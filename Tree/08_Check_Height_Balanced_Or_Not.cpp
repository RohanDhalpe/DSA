
class Solution {
public:
    bool isBalanced(TreeNode* root) {
         return HeightTree(root)!=-1;
    }
    
    int HeightTree(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        
        int LH=HeightTree(root->left);
        if(LH==-1) return -1;

        int RH=HeightTree(root->right);
        if(RH==-1) return -1;

        if (abs(LH-RH)>1) return -1;
        else return 1+ max(LH,RH);
    }
};
