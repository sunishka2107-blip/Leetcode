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
ListNode* reversek(ListNode* head) {
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
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n=0;
        ListNode* temp = head;
        while (temp != NULL) {
            n++;
            temp = temp->next;
        }
        ListNode* p = NULL;
        ListNode* c = head;
        for (int i = 0; i < n / k; i++) {
            ListNode* temp2 = c;
            for (int j = 1; j < k; j++) {
                temp2 = temp2->next;
            }
            ListNode* a = temp2->next;
            temp2->next = NULL;

            ListNode* rev = reversek(c);

            if (p == NULL) {
                head = rev;
            } else {
                p->next = rev;
            }
            p = c;
            c = a;
        }
        if (p != NULL) {
            p->next = c;
        }
        return head;
    }
};