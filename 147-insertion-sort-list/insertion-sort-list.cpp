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
    ListNode* insertionSortList(ListNode* head) {

        ListNode* dummy = new ListNode(0);

        ListNode* curr = head;

        while (curr != nullptr) {

            // Save next node before changing curr->next
            ListNode* next = curr->next;

            // Find where curr should be inserted
            ListNode* prev = dummy;

            while (prev->next != nullptr &&
                   prev->next->val < curr->val) {

                prev = prev->next;
            }

            // Insert curr between prev and prev->next
            curr->next = prev->next;
            prev->next = curr;

            // Move to next original node
            curr = next;
        }

        return dummy->next;
    }
};