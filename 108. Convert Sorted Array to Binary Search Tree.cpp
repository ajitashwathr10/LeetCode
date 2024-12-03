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
    TreeNode* algo(vector<int>& arr, int s, int e) {
        if(s > e) return nullptr;
        int mid = s + (e - s) / 2;
        TreeNode* node = new TreeNode(arr[mid]);
        node -> left = algo(arr, s, mid - 1);
        node -> right = algo(arr, mid + 1, e);
        return node;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return nullptr;
        TreeNode* root = algo(nums, 0, n - 1);
        return root;
    }
};