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
        if (head == nullptr)
            return nullptr;

        ListNode* prev = head;

        while (prev != nullptr && prev->next != nullptr) {
            if (prev->val == prev->next->val) {
                prev->next = prev->next->next;
            } else {
                prev = prev->next;
            }
        }

        return head;
    }
};

