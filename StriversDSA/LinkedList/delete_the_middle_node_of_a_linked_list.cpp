class Solution {
private:
    int lengthOfLL(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            len++;
            temp = temp->next;
        }
        return len;
    }

public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        int len = lengthOfLL(head);
        int midIdx = len / 2;

        if (midIdx == 0) {
            return head->next;
        }

        ListNode* temp = head;
        for (int i = 0; i < midIdx - 1; i++) {
            temp = temp->next;
        }

        temp->next = temp->next->next;

        return head;
    }
};
