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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head ==  NULL){
            return NULL ; 
        }
        ListNode* temp1 = head ; 
        for(int i=1 ; i<k ; i++){
            temp1 = temp1->next ; 
        }
        int n=0 ; 
        ListNode* temp = head ; 
        while(temp != NULL){
            n++ ; 
            temp = temp->next ; 
        }

        ListNode* temp2 = head ; 
        for(int i=1 ; i < n-k+1 ; i++){
            temp2 = temp2->next ; 
        }

        int a = temp1->val ; 
        temp1->val = temp2->val ; 
        temp2->val = a ; 
        return head ;     
    }

};