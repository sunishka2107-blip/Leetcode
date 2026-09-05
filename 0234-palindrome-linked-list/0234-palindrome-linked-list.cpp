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
void insertatfront(ListNode* head , ListNode* &newHead){
    ListNode* temp = head ;
    while(temp != NULL){
        int value =temp->val ; 
        ListNode* newNode = new ListNode(value) ; 
        newNode->next = newHead ; 
        newHead = newNode ; 
    
        temp = temp->next ; }
}

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* newHead = NULL ; 
        insertatfront(head,newHead);
        ListNode* l1 = head ; 
        ListNode* l2 = newHead ; 
        while(l1 != NULL){
            if(l1->val != l2->val){
                return false ; 
            }
            l1=l1->next ; 
            l2=l2->next; 
        }
        return true ; 

        
    }
};