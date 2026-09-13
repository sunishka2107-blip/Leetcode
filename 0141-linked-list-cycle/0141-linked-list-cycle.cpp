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
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            return false ; 
        }
        ListNode* a = head ; 
        while(a!=NULL){
            if(a==a->next){
                return true; 
            } 
            ListNode* temp = head ;
            while(temp!=a  && temp->next != NULL){
                if(temp == a->next){
                    return true ; 
                }
                temp = temp->next ; 
            }
            a = a->next ; 
        } 
        return false ; 
    }
};