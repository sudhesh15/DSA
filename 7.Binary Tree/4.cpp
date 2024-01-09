//Invert Binary Tree
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root != NULL){
            // Recursively invert the left subtree
            invertTree(root->left);
            // Recursively invert the right subtree
            invertTree(root->right);
            TreeNode* temp = root->left;
            root->left =  root->right;
            root->right = temp;
        }
        return root; 
    }
};