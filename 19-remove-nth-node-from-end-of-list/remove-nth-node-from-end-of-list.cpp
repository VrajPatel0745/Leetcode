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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        
        // move fast ahead by n+1 steps
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }
        
        // move both fast and slow
        while (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        
        // remove the target node
        ListNode* toDelete = slow->next;
        slow->next = slow->next->next;
        delete toDelete;  // free memory
        
        return dummy->next;
    }
};
