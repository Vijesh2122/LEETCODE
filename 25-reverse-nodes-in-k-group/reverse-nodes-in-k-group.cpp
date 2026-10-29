class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        if (head == nullptr || k == 1)
            return head;

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prevGroup = &dummy;

        while (true) {

            // Find the kth node
            ListNode* kth = prevGroup;

            for (int i = 0; i < k && kth != nullptr; i++) {
                kth = kth->next;
            }

            // Fewer than k nodes remain
            if (kth == nullptr)
                break;

            ListNode* groupNext = kth->next;

            // Reverse the current group
            ListNode* prev = groupNext;
            ListNode* curr = prevGroup->next;

            while (curr != groupNext) {
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }

            // Connect the reversed group
            ListNode* temp = prevGroup->next;
            prevGroup->next = kth;
            prevGroup = temp;
        }

        return dummy.next;
    }
};