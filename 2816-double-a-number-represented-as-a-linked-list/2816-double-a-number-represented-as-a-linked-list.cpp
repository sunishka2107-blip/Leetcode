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
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        head = reverseList(head); 
        ListNode* temp = head ; 
        int carry = 0 ; 
        while(temp != NULL){
            int n = 2*temp->val + carry ; 
            temp->val=n%10 ; 
            if(n >=10){
                carry = 1 ; 
            }
            else{
                carry=0 ; 
            }
            temp = temp->next ; 
        }
        if(carry == 1){
            ListNode* newNode = new ListNode(carry) ; 
            temp = head ; 
            while(temp->next != NULL){
                temp = temp->next ; 
            }  
            temp->next = newNode ; 
        }
        head = reverseList(head) ; 
        return head ; 
        
    }
};