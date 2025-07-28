class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list11, ListNode* list22) {
        if (list11 == nullptr) return list22;
        if (list22 == nullptr) return list11;

        ListNode* head = nullptr;
        ListNode* list1 = list11;
        ListNode* list2 = list22;

        if (list2->val < list1->val) {
            head = list2;
            list2 = list2->next;
            head->next = list1;
            list1 = head;
        } else {
            head = list1;
        }

        ListNode* prev = nullptr;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                prev = list1;
                list1 = list1->next;
            } else {
                ListNode* next2 = list2->next;
                prev->next = list2;
                list2->next = list1;

                prev = list2;
                list2 = next2;
            }
        }
        if (list2 != nullptr) {
            prev->next = list2;
        }

        return head;
    }
};
