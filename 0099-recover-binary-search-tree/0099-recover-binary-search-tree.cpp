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
    TreeNode* prev = NULL ; 
    TreeNode* a = NULL ; 
    TreeNode* b = NULL ; 
    void inorder(TreeNode* root){
        if(root == NULL){
            return ; 
        }
        inorder(root->left) ; 
        if(prev != NULL && prev->val > root->val){
            if(a == NULL){
                a = prev ; 
            }
            b = root ; 
        }
        prev = root ; 
        inorder(root->right) ; 

    }
    void recoverTree(TreeNode* root) {
        inorder(root) ; 
        int temp = a->val ; 
        a->val = b->val ; 
        b->val = temp ; 

        
    }
};