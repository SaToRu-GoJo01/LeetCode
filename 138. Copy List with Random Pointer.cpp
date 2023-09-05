/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *front = head;
        Node *iter = head;
        //Setting up the copy nodes
        while(iter != NULL){
            front = iter->next;
            Node* copy = new Node(iter->val);
            iter->next = copy;
            copy->next = front;
            iter = front;
        }
        //Adding Random pointers
        iter = head;
        // front = head;
        while(iter != NULL){
            if(iter->random != NULL)
            iter->next->random = iter->random->next;
            iter=iter->next->next;
        }
        //Seperating original and copy linked list
        iter = head;
        Node *psuedoHead = new Node(0);
        Node *copy = psuedoHead;
        while(iter != NULL){
            front = iter->next->next;

            copy->next = iter->next;
            
            copy  = copy->next;

            iter->next = front;

            iter = front; 
        }
        return psuedoHead->next;
    }
};
