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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v ; 
        if(root == NULL){
            return v; 
        }
        
        queue<TreeNode*> q ; 
        q.push(root) ; 
        int level =1 ; 
        while(!q.empty()){
            int n = q.size();
            vector<int> ans ;
            for(int i=0 ; i<n ; i++){
                TreeNode* curr = q.front() ; 
                q.pop() ; 
                ans.push_back(curr->val);
             
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right) ; 
            }
            } 
            if(level%2 == 0){
                reverse(ans.begin() , ans.end()) ; 
            }
            v.push_back(ans);
            level++ ; 
        }
        return v ; 
        
    }
};