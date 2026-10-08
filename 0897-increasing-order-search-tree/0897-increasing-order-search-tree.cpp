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
void inorder(TreeNode* root , vector<TreeNode*> &v){
    if(root == NULL){
        return ;
    }
    inorder(root->left , v); 
    v.push_back(root) ; 
    inorder(root->right , v) ; 
}
    TreeNode* increasingBST(TreeNode* root) {
        vector<TreeNode*> v ; 
        inorder(root , v);
        int n = v.size() ; 
        for(int i=0 ; i<n-1 ; i++){
            TreeNode* temp1 = v[i] ; 
            TreeNode* temp2 = v[i+1] ; 

            temp1->right = temp2 ; 
            temp1->left = NULL ; 
        }
        v[n-1]->left = NULL ; 
        v[n-1]->right = NULL ; 

        return v[0];
        
    }
};