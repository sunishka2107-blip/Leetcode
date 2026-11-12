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

    ListNode* reverseList(ListNode* head){
        ListNode* curr = head ; 
        ListNode* prev = NULL ; 
        ListNode* next = NULL ; 
        while(curr != NULL){
            next = curr->next ; 
            curr->next = prev ; 
            prev = curr ; 
            curr = next ; 
        }
        return prev ; 
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return NULL ; 
        }
        head = reverseList(head) ; 
        if(n==1){
            ListNode* temp = head ; 
            head = head->next ; 
            delete temp ; 
        }
        else{
            ListNode* temp = head ; 
            for(int i=1 ; i<n-1 ; i++){
                temp = temp->next ; 
            }
            ListNode* a = temp->next ; 
            temp->next = a->next ; 
            delete a ; 
        }
        head = reverseList(head);

        return head;
        
    }
};