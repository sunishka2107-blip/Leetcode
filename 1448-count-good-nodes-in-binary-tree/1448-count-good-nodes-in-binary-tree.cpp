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
int countNodes(TreeNode* root , int maximum){
    if(root == NULL){
        return 0 ; 
    }
    int max = INT_MIN ; 
    int count = 0 ; 
    if(root->val >= maximum){
        count++ ; 
        maximum = root->val ; 
    }
    return countNodes(root->left , maximum) + countNodes(root->right , maximum) + count ; 
}
    int goodNodes(TreeNode* root) {
        return countNodes(root , root->val);
        
    }
};