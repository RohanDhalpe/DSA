
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;

        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {   vector<int>Level;
            int size=q.size();

            for(int i=0;i<size;i++)
            {   
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
                Level.push_back(temp->val);
            }
            ans.push_back(Level);
        }
       return ans;
    }
};
