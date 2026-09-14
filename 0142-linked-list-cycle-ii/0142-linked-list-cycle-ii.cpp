/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL){
            return NULL ; 
        }
        ListNode* a = head ; 
        while(a!=NULL){
            if(a==a->next){
                return a ; 
            }
            ListNode* temp = head ; 
            while(a!=temp && temp->next != NULL){
                if(temp == a->next){
                    ListNode* b = head ; 
                    while(b!=temp){
                        b=b->next ; 
                        
                    } 
                     return b ;
                }
                temp = temp->next ; 
            }
            a = a->next ; 
        } 
        return NULL ; 
        
    }
};