//Same Tree
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;
        else if(p != NULL && q != NULL){
            return p->val == q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        } else{
            return false;
        }
    }
};