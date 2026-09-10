class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        while (head != NULL && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        ListNode* temp = head;

        while (temp != NULL && temp->next != NULL) {

            if (temp->next->val == val) {
                ListNode* del = temp->next;
                temp->next = del->next;
                delete del;
            }
            else {
                temp = temp->next;
            }
        }

        return head;
    }
};