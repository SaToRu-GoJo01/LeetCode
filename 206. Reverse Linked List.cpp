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
    //Recursive Solution
    ListNode* reverse(ListNode* current,ListNode* previous){
        if(current == NULL){
            return previous;
        }
        else{
            ListNode * temp = current -> next;
            current->next = previous;
            previous = current;
            return reverse(temp,previous); 
        }
    }
    ListNode* reverseList(ListNode* head) {
        //ITERATIVE METHOD
        // ListNode*prev = nullptr;
        // while(head != NULL){
        //     ListNode*nxt = head->next;
        //     head->next = prev;
        //     prev = head;
        //     head = nxt;
        // }
        // return prev;
        return reverse(head,nullptr);
    }
};
