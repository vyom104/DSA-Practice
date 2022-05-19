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
        int lenA = 0;
        int lenB = 0 ;
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        
        while(tempB != nullptr)
        {
            tempB = tempB->next;
            lenB++;
        }
        while(tempA != nullptr)
        {
            tempA = tempA->next;
            lenA++;
        }
        int lenMax = max(lenA, lenB);
        
        if(lenA > lenB)
        {
            for( int i = 0 ; i < lenA - lenB; i++)
                headA = headA->next;
        }
        else if(lenB > lenA)
        {
            for( int i = 0 ; i < lenB - lenA; i++)
                headB = headB->next;
        }
        
        while(headA != nullptr && headB != nullptr)
        {
            if(headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }
};