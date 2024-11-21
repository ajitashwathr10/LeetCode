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
        inorder_trans(root, res);
        return res;

    }
private:
    void inorder_trans(TreeNode* node, vector<int>& res) {
        if(node == NULL) {
            return;
        } else {
            inorder_trans(node->left, res);
            res.push_back(node->val);
            inorder_trans(node->right, res);
        }
    }
};