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
    ListNode* reverseList(ListNode* head) {
       ListNode* p,*q,*r;
        if(head==NULL || head->next==NULL) return head;
        p=NULL;
        q=head;
        r=head->next;
        while(q!=NULL){
            q->next=p;
            p=q;
            q=r;
           if(r) r=r->next;
        }
        return head=p;
    }
};