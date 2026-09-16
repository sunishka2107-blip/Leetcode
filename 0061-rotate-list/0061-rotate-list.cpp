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
ListNode* reverse(ListNode* head){
    ListNode* curr = head ; 
    ListNode* prev = NULL ; 
    ListNode* next = NULL ; 
    while(curr != NULL){
        next = curr->next; 
        curr->next = prev ; 
        prev = curr ; 
        curr = next ; 
    }
    head = prev ; 
    return prev ; 
}


class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL){
            return head ; 
        }
        int count = 0 ; 
        ListNode* temp = head ; 
        while(temp != NULL){
            count ++ ; 
            temp = temp->next ; 
        }
        k=k%count ; 
        if(count == k){
            return head ; 
        }
        if(k==0){
            return head ; 
        }

        head = reverse(head) ;  
        ListNode* curr = head ; 
        ListNode* prev = NULL ; 
        ListNode* next = NULL ;
        for(int i= 1 ; i<=k ; i++){
        next = curr->next; 
        curr->next = prev ; 
        prev = curr ; 
        curr = next ; 
        }
        head = prev ;
        ListNode* a = reverse(curr) ; 

        ListNode* b = head ; 
        while(b->next != NULL){
            b = b->next ;  
        }
        b->next = a ; 
        return head ; 
        
    }
    
};