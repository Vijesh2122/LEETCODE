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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        ListNode* tail=head;
        int n=1;
        while(tail->next!=NULL){
            tail=tail->next;
            n++;
        }
        k=k%n;
         if(k==0){
            return head;
        }
        tail->next=head;
        int step=n-k;
       
        ListNode* newtail=head;
        ListNode* newhead;
        for(int i=0;i<step-1;i++){
            newtail=newtail->next;
        }
        newhead=newtail->next;
        newtail->next=NULL;
        return newhead;




    }
};