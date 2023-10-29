class Solution {
public:
    int solve(TreeNode* root, int& d){
        if(!root){
            return NULL;
        }
        int lDepth=solve(root->left,d);
        int rDepth=solve(root->right,d);
        d=max(d,lDepth+rDepth);
        return max(lDepth,rDepth)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        solve(root,d);
        return d;
    }
};