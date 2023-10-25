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
    ListNode* removeNthFromEnd(ListNode* head, int K) {
        ListNode*temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        K = (count - K + 1);
        if(K == 1){
            temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
            return head;
        }
        ListNode*prev = NULL;
        temp = head;
        count = 1;
        while(temp != NULL && count != K){
            count++;
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        temp->next = NULL;
        delete temp;
        return head;

        }
};
