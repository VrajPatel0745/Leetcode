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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;

        ListNode* dummy = new ListNode(0, head); // dummy before head
        ListNode* prev = dummy; // points to last node known to be distinct
        ListNode* curr = head;

        while (curr != nullptr) {
            bool duplicate = false;

            // Skip all nodes with the same value
            while (curr->next != nullptr && curr->val == curr->next->val) {
                duplicate = true;
                curr = curr->next;
            }

            if (duplicate) {
                // Skip the entire duplicate block
                prev->next = curr->next;
            } else {
                // No duplicate -> move prev forward
                prev = prev->next;
            }
            curr = curr->next; // move forward
        }

        return dummy->next;
    }
};
