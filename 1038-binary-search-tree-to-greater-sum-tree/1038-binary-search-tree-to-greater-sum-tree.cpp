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
    void inorder(TreeNode* root , vector<int> &v){
        if(root == NULL){
            return ; 
        }
        inorder(root->left , v) ; 
        v.push_back(root->val ) ; 
        inorder(root->right , v) ; 

    }
    void update(TreeNode* root , vector<int> &v){
        if(root == NULL){
            return ; 
        }
        update(root->left , v) ;
        int i=0 ; 
        while(root->val != v[i]){
            i++ ; 
        }
        int sum = 0 ; 
        for(int j=i ; j<v.size() ; j++){
            sum = sum+v[j] ; 
        }
        root->val = sum ; 
        update(root->right , v);
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int> v ; 
        inorder(root , v) ; 
        update(root , v) ; 
        return root ; 
        
    }
};