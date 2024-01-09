//Binary Tree Preorder Traversal
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        printPreOrder(root, ans);
        return ans;
    }

    void printPreOrder(TreeNode* root, vector<int>& ans){
        if(root != NULL){
            ans.push_back(root->val);
            printPreOrder(root->left, ans);
            printPreOrder(root->right, ans);
        }
    }
};