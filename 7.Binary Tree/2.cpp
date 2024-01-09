//Binary Tree Inorder Traversal
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        printInOrder(root, ans);
        return ans;
    }

    void printInOrder(TreeNode* root, vector<int>& ans){
        if(root != NULL){
            printInOrder(root->left, ans);
            ans.push_back(root->val);
            printInOrder(root->right, ans);
        }
    }
};