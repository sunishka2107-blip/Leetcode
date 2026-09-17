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
 ListNode* merge (ListNode* a , ListNode* b){
    if(a == NULL){
        return b ; 
    }
    if(b == NULL){
        return a ; 
    }
    ListNode* head = NULL ; 
    ListNode* tail = NULL ; 
    while(a!=NULL && b!=NULL){
        ListNode* temp ; 
        if(a->val <= b->val){
            temp = a ; 
            a = a->next ;
        }
        else{
            temp = b ; 
            b = b->next ; 
        }
        if(head == NULL){
            head = temp ; 
            tail = temp ; 
        }
        else{
            tail->next = temp ; 
            tail = temp ; 
        }
        if(a!=NULL){
            tail->next = a ; 
        }
    }
        if(b!=NULL){
            tail->next = b ; 
        }
        return head ; 
    
 }
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size() ; 
        if(n==0){
            return NULL ; 
        }
        ListNode* head = lists[0] ; 
        for(int i = 1 ; i<n ; i++){
            head = merge(head , lists[i]);}
        return head ;
    }
};