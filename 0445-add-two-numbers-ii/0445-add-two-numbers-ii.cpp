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
    ListNode* reverseLL(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverseLL(l1);
        l2 = reverseLL(l2);
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* head = NULL;
        ListNode* tail = NULL;
        int carry = 0;

        while (temp1 != NULL && temp2 != NULL) {
            int n = temp1->val + temp2->val + carry;

            if (n >= 10) {
                carry = 1;
            } else {
                carry = 0;
            }
            ListNode* newNode = new ListNode(n % 10);
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
            int n = temp1->val + carry;
            if (n >= 10) {
                carry = 1;
            } else {
                carry = 0;
            }
            ListNode* newNode = new ListNode(n%10);
            tail->next = newNode ; 
            tail = newNode ; 
            temp1 = temp1->next ; 
        }
        while (temp2 != NULL) {
            int n = temp2->val + carry;
            if (n >= 10) {
                carry = 1;
            } else {
                carry = 0;
            }
            ListNode* newNode = new ListNode(n%10);
            tail->next = newNode ; 
            tail = newNode ; 
            temp2 = temp2->next ; 
        }
        if(carry == 1){
            ListNode* newNode = new ListNode(carry) ; 
            ListNode* a = head ; 
            while(a->next != NULL){
                a = a->next ; 
            }
            a->next = newNode ; 
            a = newNode; 
        }
        head = reverseLL(head);
        return head ; 
    }
};