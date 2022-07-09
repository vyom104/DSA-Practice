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
        ListNode* currHead,*p,*q,*curr;
        if(a==NULL)return b;
        if(b==NULL)return a;
        p=a;
        q=b;
        if(p->val<=q->val){
            currHead=p;
            p=p->next;
        }else{
            currHead=q;
            q=q->next;
        }
        curr=currHead;
        while(p && q){
            if(p->val<=q->val){
            curr->next=p;
            p=p->next;
        }else{
            curr->next=q;
            q=q->next;
        }
            curr=curr->next;
        }
        if(p){
            curr->next=p;
        }else if(q){
            curr->next=q;
        }
        return currHead;
    }
};