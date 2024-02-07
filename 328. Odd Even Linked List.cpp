// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        // vector<int> odd;
        // vector<int> even;
        // bool curr = true;
        // ListNode*temp = head;
        // while(head!=NULL){
        //     if(curr){
        //         odd.push_back(head->val);
        //         curr = false;
        //     }
        //     else{
        //         even.push_back(head->val);
        //         curr = true;
        //     }
        //     head = head->next;
        // }
        // head = temp;
        // while(odd.size()!=0){
        //     temp->val = odd[0];
        //     odd.erase(odd.begin());
        //     temp = temp->next;
        // }
        // while(even.size()!=0){
        //     temp->val = even[0];
        //     even.erase(even.begin());
        //     temp = temp->next;
        // }
        // return head;
        if(head == NULL || head->next == NULL) return head;
        ListNode*oddTail = head,*evenHead = head->next,*evenTail=head->next;
        while(evenTail != NULL && evenTail->next!=NULL){
            oddTail->next = oddTail->next->next;
            evenTail->next = evenTail->next->next;
            oddTail = oddTail->next;
            evenTail = evenTail->next;
        }
        oddTail->next = evenHead;
        return head;
    }
};
