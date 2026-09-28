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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        if (head == NULL) {
            return v;
        }
        ListNode* temp = head;
        while (temp != NULL) {
            ListNode* temp2 = temp->next;
            while (temp2 != NULL) {
                if (temp->val < temp2->val) {
                    v.push_back(temp2->val);
                    break ; 
                 
                }
                temp2 = temp2->next;
            }
            if (temp2 == NULL) {
                v.push_back(0);
            }

            temp = temp->next;
        }
        return v;
    }
};