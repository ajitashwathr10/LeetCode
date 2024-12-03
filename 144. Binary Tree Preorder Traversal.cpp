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
    void dfs(TreeNode *root, vector<int>& preOrder) {
        if(root != nullptr) {
            preOrder.push_back(root -> val);
            dfs(root -> left, preOrder);
            dfs(root -> right, preOrder);
        }
    }
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> num;
        if(root == nullptr) return num;
        dfs(root, num);
        return num;
    }
};