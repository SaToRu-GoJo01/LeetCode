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

// APPROACH USING STACK
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode*temp = head;
        while(temp!=NULL){
            st.push(temp->val);
            temp =temp->next;
        }
        while(head != NULL){
            if(st.top() != head->val){
                return false;
            }
            st.pop();
            head = head->next;
        }
        return true;
    }
};

// APPROACH USING REVERSE AND TWO POINTER
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode*curr = head;
        ListNode*prev = NULL;
        ListNode*nxt = NULL;
        while(curr != NULL){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
        ListNode*slow = head;
        ListNode*fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode*head2 = reverse(slow->next);
        while(head2 != NULL){
            if(head->val != head2->val) return false;
            head = head->next;
            head2 = head2->next;
        }
        return true;
    }
};
