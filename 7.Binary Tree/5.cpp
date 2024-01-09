//Symmetric Tree
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        return isSymmetric(root->left, root->right);
    }

    bool isSymmetric(TreeNode* f1, TreeNode* f2) {
        if (f1 == NULL && f2 == NULL) return true;
        if (f1 == NULL || f2 == NULL) return false;
        return f1->val == f2->val && isSymmetric(f1->left, f2->right) && isSymmetric(f1->right, f2->left);
    }
};