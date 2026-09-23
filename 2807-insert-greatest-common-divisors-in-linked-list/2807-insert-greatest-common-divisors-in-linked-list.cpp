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
 int GCD(int a , int b){
    while(b!=0){
        int temp = b ; 
        b = a%b ; 
        a = temp ; 
    }
    return a ; 
 }
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL){
            return NULL ; 
        }
        ListNode* temp = head ; 
        while(temp->next != NULL){
            int gcd = GCD(temp->val , temp->next->val) ; 
            ListNode* newNode = new ListNode(gcd) ; 
            newNode->next = temp->next ; 
            temp->next = newNode ; 

            temp = newNode->next ; 
        }
        return head ; 

        
    }
};