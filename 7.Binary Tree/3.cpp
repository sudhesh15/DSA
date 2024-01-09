//Binary Tree Postorder Traversal
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        printPostOrder(root, ans);
        return ans;
    }

    void printPostOrder(TreeNode* root, vector<int>& ans){
        if(root != NULL){
            printPostOrder(root->left, ans);
            printPostOrder(root->right, ans);
            ans.push_back(root->val);
        }
    }
};