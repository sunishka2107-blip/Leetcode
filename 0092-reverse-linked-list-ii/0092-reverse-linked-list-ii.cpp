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

ListNode* reverse(ListNode* curr, int left, int right) {
    ListNode* prev = NULL;
    ListNode* next = NULL;

    for (int i = left; i <= right; i++) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL || left == right) {
            return head;
        }
        if (left == 1){
            ListNode* curr = head ; 
            ListNode* temp = head ; 
            for(int i= left ; i<=right ; i++){
                temp = temp->next ; }
            head = reverse (curr , left , right) ; 
            curr->next = temp ; 
            return head ; }

        ListNode* curr = head;
        ListNode* prev = NULL;
        for (int i = 1; i < left; i++) {
            prev = curr;
            curr = curr->next;
        }
        ListNode* a = prev;
        ListNode* b = curr;
        ListNode* temp = curr;
        for (int i = left; i <= right; i++) {
            temp = temp->next;
        }

        ListNode* c = reverse(curr, left, right);
        a->next = c;
        b->next = temp;

        return head;
    }
};