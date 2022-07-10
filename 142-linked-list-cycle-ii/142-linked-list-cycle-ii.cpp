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
    ListNode *helper(ListNode *head){
        if(head == NULL) return NULL;
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast != NULL && fast ->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                return slow;
            }
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
       ListNode *temp= helper(head);
        if(temp==NULL) return NULL;
        ListNode *slow = head;
        slow=head;
        while(temp != slow)
        {
            temp = temp->next;
            slow = slow->next;
        }
        return temp;
    }
};