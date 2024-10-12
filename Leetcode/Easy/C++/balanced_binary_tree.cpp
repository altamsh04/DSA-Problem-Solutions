class Solution {
private:
    bool flag = true;

    int height(TreeNode* root) {
        if (root == NULL) return 0;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        if (abs(leftHeight - rightHeight) > 1) {
            flag = false;
        }

        return 1 + max(leftHeight, rightHeight);
    }

public:
    bool isBalanced(TreeNode* root) {
        flag = true;
        height(root);
        return flag;
    }
};
