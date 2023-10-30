class Solution {
public:
    int solve(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lh=solve(root->left);
        int rh=solve(root->right);
        if(lh==-1 || rh==-1){
            return -1;
        }
        if(abs(lh-rh)>1){
            return -1;
        }
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        return solve(root)!=-1;
    }
};