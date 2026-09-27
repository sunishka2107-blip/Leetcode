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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1 == NULL) {
            return l2;
        }
        if(l2 == NULL){
            return l1 ; 
        }
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* head = NULL;
        ListNode* tail = NULL;
        int carry = 0;
        while (temp1 != NULL && temp2 != NULL) {
            int sum = temp1->val + temp2->val + carry; 

            if (sum >= 10) {
                carry = 1;
            } else {
                carry = 0;
            }
            ListNode* newNode = new ListNode(sum%10);
            if (head == NULL) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        while (temp1 != NULL) {
            int sum = temp1->val + carry; 
            if (sum >= 10) {
                carry = 1;
            } else {
                carry = 0;
            }
            ListNode* newNode = new ListNode(sum%10);
            if (head == NULL) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode ;
            }
            temp1 = temp1->next;
        }
        while (temp2 != NULL) {
            int sum = temp2->val + carry; 
            if (sum >= 10) {
                carry = 1;
            } else {
                carry = 0;
            }
            ListNode* newNode = new ListNode(sum%10);
            if (head == NULL) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
            temp2 = temp2->next;
        }
        if (carry == 1) {
            tail->next = new ListNode(1);
        }

        return head;
    }
};