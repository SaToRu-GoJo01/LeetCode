/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //Naive Approach using map
        // if(head == NULL) return false;
        // unordered_map<ListNode*, bool> visited;

        // while (head != nullptr) {
        //     if (visited[head]) {
        //         return true;
        //     }
        //     visited[head] = true;
        //     head = head->next;
        // }
        // return false;
    

    //TWO POINTER APPROACH
        if(head==NULL) return false;
        ListNode*fast = head,*slow = head;
        while(fast->next != NULL && fast->next->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                return true;
            }
        }
        return false;
    }
};
