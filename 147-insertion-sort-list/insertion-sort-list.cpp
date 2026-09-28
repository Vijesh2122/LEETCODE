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
        ListNode* i;
        ListNode* j;
        int temp;
        for(i=head;i->next!=nullptr;i=i->next){
            for(j=i->next;j!=nullptr;j=j->next){
                if(i->val>j->val){
                temp=i->val;
                i->val=j->val;
                j->val=temp;
                }
            }
        }
        return head;
    }
};