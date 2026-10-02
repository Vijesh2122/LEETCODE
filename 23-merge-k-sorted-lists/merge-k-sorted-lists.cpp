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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (a != NULL && b != NULL) {
            if (a->val <= b->val) {
                tail->next = a;
                a = a->next;
            } else {
                tail->next = b;
                b = b->next;
            }

            tail = tail->next;
        }

        tail->next = (a != NULL) ? a : b;

        return dummy.next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty())
            return NULL;

        int k = lists.size();

        while (k > 1) {
            int newK = 0;

            for (int i = 0; i < k; i += 2) {
                if (i + 1 < k)
                    lists[newK++] = mergeTwoLists(lists[i], lists[i + 1]);
                else
                    lists[newK++] = lists[i];
            }

            k = newK;
        }

        return lists[0];
    }
};