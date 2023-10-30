class Solution {
public:
    bool isMatch(TreeNode* left,TreeNode* right){
        if(left==NULL || right==NULL){
            return left==right;
        }
        if(left->val!=right->val){
            return false;
        }
        return isMatch(left->left,right->right) && isMatch(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        return isMatch(root->left,root->right);
    }
};