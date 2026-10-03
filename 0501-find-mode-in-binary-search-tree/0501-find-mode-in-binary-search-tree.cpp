/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    map<int, int> m;
    void inorder(TreeNode* root) {
        if (root == NULL) {
            return;
        }
        inorder(root->left);

        m[root->val]++;

        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        inorder(root);
        int maximum = 0;
        for (auto i : m) {
            maximum = max(maximum, i.second);
        }
        for (auto i : m) {
            if (i.second == maximum) {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};