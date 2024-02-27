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
private:
    int maxDiameter;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        maxDiameter = 0;
        depthFirstSearch(root);
        return maxDiameter;
    }
    int depthFirstSearch(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }

        int leftDepth = depthFirstSearch(node->left);
        int rightDepth = depthFirstSearch(node->right);

        maxDiameter = max(maxDiameter, leftDepth + rightDepth);
        return 1 + max(leftDepth, rightDepth);
    }
};
