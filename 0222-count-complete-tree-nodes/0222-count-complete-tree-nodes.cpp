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
    int countNodes(TreeNode* root) {
        TreeNode* temp1 = root ; 
        TreeNode* temp2 = root ; 
        int count1=0 , count2 = 0; 
        if(root == NULL){
            return 0 ; 
        } 
        while(temp1 != NULL){
            count1++ ; 
            temp1 = temp1->left;
                    }
        while(temp2 != NULL){
            count2++ ; 
            temp2 = temp2->right ; 
        }

        if(count1 == count2){
            return pow(2,count1)-1 ; 
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};