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
 TreeNode* insertTree(TreeNode* root , int data){
    if(root == NULL){
        return new TreeNode(data) ; 
    }
    if(data < root->val){
        root->left = insertTree(root->left , data);
    }
    if(data > root->val){
        root->right = insertTree(root->right , data) ; 
    }
    return root ; 
 }
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root =  NULL ; 
        for(int i=0 ; i<preorder.size() ; i++){
            root = insertTree(root , preorder[i]) ; 
        }
        return root ; 
        
    }
};