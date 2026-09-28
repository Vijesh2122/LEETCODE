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
    bool isPalindrome(ListNode* head) {

        // Empty list or one node
        if (head == nullptr || head->next == nullptr)
            return true;

        // 1. Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Reverse second half
        ListNode* prev = nullptr;
        ListNode* cur = slow;

        while (cur != nullptr) {
            ListNode* temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }

        // prev is now the head of reversed second half
        ListNode* second = prev;
        ListNode* first = head;

        // 3. Compare
        while (second != nullptr) {

            if (first->val != second->val)
                return false;

            first = first->next;
            second = second->next;
        }

        return true;
    }
};