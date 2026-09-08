/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head ; 
        while(curr!=NULL){
            if(curr->child != NULL){
                Node* temp = curr->next ; 
                Node* child = curr->child ; 
                curr->next = child ; 
                child->prev = curr ; 
                curr->child = NULL;
                while(child->next != NULL){
                    child = child->next ; 
                }
                child->next = temp ; 
                if(temp!=NULL){
                    temp->prev = child ; }
            }
            curr = curr->next ; 
        }
        return head ; 
        
    }
};