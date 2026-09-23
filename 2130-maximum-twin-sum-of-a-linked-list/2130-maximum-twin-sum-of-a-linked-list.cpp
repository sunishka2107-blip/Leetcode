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
    int pairSum(ListNode* head) {
        ListNode* slow = head ; 
        ListNode* fast = head ; 
        while(fast!=NULL && fast->next != NULL){
            slow = slow->next ; 
            fast = fast->next->next ; 
        }
        ListNode* temp1 = head ; 
        ListNode* temp2 = slow ; 

        ListNode* prev = NULL ; 
        ListNode* curr = temp2 ; 
        ListNode* next = NULL ; 
        while(curr != NULL){
            next = curr->next ; 
            curr->next = prev ; 
            prev = curr ; 
            curr = next ; 
        }
        temp2 = prev ; 

        int a = 0 ;
        while(temp1!=NULL && temp2!=NULL){
            int sum = temp1->val + temp2->val;

            if(sum>a){
                a=sum ; 
            }
            temp1 = temp1->next ; 
            temp2 = temp2->next ; 
        }
        return a ; 
        
    }
};