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
    int sumTree(TreeNode* root){
        if(root == NULL){
            return 0; 
        }
        return sumTree(root->left) + sumTree(root->right) + root->val ; 
    }
    int findTilt(TreeNode* root) {
        if(root == NULL){
            return 0 ; 
        }
        int tilt = abs(sumTree(root->left) - sumTree(root->right)) ; 

        return tilt + findTilt(root->left) + findTilt(root->right) ; 
        
    }
};