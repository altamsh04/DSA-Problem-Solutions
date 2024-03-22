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
private:
    pair<ListNode*, ListNode*> mid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if (prev) {
            prev->next = nullptr; // Separate the two halves of the list
        }

        return {slow, prev};
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;

        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }

        return prev;
    }

public:
    bool isPalindrome(ListNode* head) {
        auto [middle, prevMiddle] = mid(head);
        ListNode* reversed = reverseList(middle);

        while (head && reversed) {
            if (head->val != reversed->val) {
                return false;
            }
            head = head->next;
            reversed = reversed->next;
        }

        return true;
    }
};
