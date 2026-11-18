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

    ListNode* reversePair(ListNode* a , ListNode* b){
        a->next = b->next ; 
        b->next = a ; 
        return b ; 
    }
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        if(head->next == NULL){
            return head ; 
        }
        ListNode* a = head ; 
        ListNode* b = head->next ; 
        ListNode* head2 = b ; 
        ListNode* p = NULL ; 
        while(a != NULL && b != NULL){
            ListNode* c = b->next ; 
            reversePair(a,b);

            if(p!=NULL){
                p->next = b;
            }
            p = a ; 
            a = c ; 
            if(a!=NULL){
                b=a->next ; 
            }
        }
        return head2 ; 
        
    }
};