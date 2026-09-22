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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if(list1 == NULL){
            return list2 ; 
        }
        ListNode* temp1 = list1 ; 
        for(int i=0 ; i<a-1 ; i++){
            temp1 = temp1->next ; 
        }
        ListNode* temp2 = list1 ; 
        for(int i=0 ; i<=b ; i++){
            temp2 = temp2->next ; 
        }
        if(list2 == NULL){
            temp1->next = temp2 ;
            return list1 ;  
        }
        ListNode* temp3 = list2 ; 
        while(temp3->next != NULL){
            temp3 = temp3->next ; 
        }
        temp1->next = list2 ; 
        temp3->next = temp2 ; 
        return list1 ; 
        
    }
};