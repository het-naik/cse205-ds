class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> v;
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            if(temp==NULL){
                ans.push_back(v);
                v.clear();
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                v.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }
        return ans;
    }
};