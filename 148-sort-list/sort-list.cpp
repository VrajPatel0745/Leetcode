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
    ListNode* sortList(ListNode* head) {
        if (!head) return nullptr;

        // Step 1: Copy all values into a vector
        vector<int> vals;
        ListNode* temp = head;
        while (temp) {
            vals.push_back(temp->val);
            temp = temp->next;
        }

        // Step 2: Sort the vector
        sort(vals.begin(), vals.end());

        // Step 3: Rewrite values back into the linked list
        temp = head;
        for (int v : vals) {
            temp->val = v;
            temp = temp->next;
        }

        return head;
    }
};
