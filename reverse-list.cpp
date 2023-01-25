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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp = head;
        ListNode *dummy = new ListNode(-1);
        // dummy->next = head;
        while(temp != NULL){
            ListNode *curr = temp;
            temp = temp->next;
            curr->next = dummy->next;
            dummy->next = curr;           
        }
        return dummy->next;
    }
};