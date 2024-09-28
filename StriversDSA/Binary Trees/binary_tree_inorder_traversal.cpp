/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;

        if (root == nullptr) return res;

        stack<TreeNode*> s;
        TreeNode* node = root;

        while (node != nullptr) {
            s.push(node);
            node = node->left;
        }

        while (!s.empty()) {
            node = s.top();
            s.pop();
            res.push_back(node->val);

            node = node->right;
            while (node != nullptr) {
                s.push(node);
                node = node->left;
            }
        }

        return res;
    }
};
