class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        std::ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if (p == nullptr && q == nullptr) {
            return true;
        }
        if (p == nullptr || q == nullptr) {
            return false;
        }
        if (p->val != q->val) {
            return false;
        }
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
