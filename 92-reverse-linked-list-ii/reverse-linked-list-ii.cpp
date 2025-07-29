class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* tp = &dummy;

        for (int i = 1; i < left; i++) {
            tp = tp->next;
        }

        ListNode* prev = nullptr;
        ListNode* curr = tp->next;
        ListNode* tail = curr;

        for (int i = 0; i <= right - left; i++) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        // Connect back
        tp->next = prev;
        tail->next = curr;

        return dummy.next;
    }
};
