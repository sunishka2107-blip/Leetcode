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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q ;
        q.push(root) ; 
        int answer = 1 ;  
        int level = 1 ; 
        int maximum = INT_MIN;

        while(!q.empty()){
            int n = q.size() ; 
            int sum = 0 ; 
            for(int i=0 ; i<n ; i++){
            TreeNode* curr = q.front() ; 
            q.pop() ; 
            
            sum = sum+curr->val ; 
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right) ;  
            }
            }
            if(sum > maximum){
                maximum = sum ;
                answer = level; 
            }
            level ++ ; 

        } 
        return answer  ;

        
    }
};