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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* del;
        ListNode* temp;
        temp=head;
        if(head==nullptr || (head->next==nullptr && n>0)){
        return nullptr;
        }
        int c=0;
        while(temp!=nullptr){
            temp=temp->next;
            c++;
        }
        if(n==c){
            head=head->next;
            return head;
        }
        temp=head;
        for(int i=1;i<c-n;i++){
            temp=temp->next;

        }

        del=temp->next;
        temp->next=del->next;
        del->next=nullptr;
        return head;



    }
};