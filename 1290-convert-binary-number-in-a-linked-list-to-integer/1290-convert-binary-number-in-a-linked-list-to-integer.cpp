/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int count = 0 ; 
        ListNode* temp = head ; 
        while(temp != NULL){
            count ++ ; 
            temp = temp->next ; 
        }
        int p = count - 1 ; 
        int ans = 0  ; 
        ListNode* a = head ; 
        while (a != NULL){
            ans = ans + pow(2,p)* a->val ; 
        
        p-- ; 
        a = a->next ; 
        }
         return ans ; 
    }
   
};