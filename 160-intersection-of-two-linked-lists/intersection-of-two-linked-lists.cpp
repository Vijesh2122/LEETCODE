/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1=headA;
        ListNode *temp2=headB;
        int c1=0,c2=0;
        while(temp1!=nullptr){
            c1++;
            temp1=temp1->next;
        }
         while(temp2!=nullptr){
            c2++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        int k=abs(c1-c2);
        if(c1>c2){
            for(int i=0;i<k;i++)temp1=temp1->next;
        }
        else
        for(int i=0;i<k;i++)temp2=temp2->next;
        while(temp1!=nullptr && temp2!=nullptr){
            if(temp1==temp2)return temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return nullptr;

    }
};