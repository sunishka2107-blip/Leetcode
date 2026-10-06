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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        vector<long long> v;
        q.push(root);
        while (q.size() > 0) {
            int n = q.size();
            long long sum = 0;
            for (int i = 0; i < n; i++) {
                TreeNode* curr = q.front();
                q.pop();
                sum = sum + curr->val;

                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
            v.push_back(sum) ; 
        }
        sort(v.begin() , v.end());
        if( k >v.size()){
            return -1 ; 
        }
        return v[v.size() - k] ; 
    }
};