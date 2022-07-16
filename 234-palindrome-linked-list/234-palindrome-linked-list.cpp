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
     ListNode* getMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head -> next;
        while(fast!= NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next1 = curr -> next;
        
        while(curr!=NULL){
            next1 = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next1;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head -> next == NULL){
            return 1;
        }
        ListNode* middle = getMid(head);
        
        ListNode* temp = middle -> next;
        middle -> next = reverse(temp);
        
        ListNode* head1 = head;
        ListNode* head2 = middle -> next;
        
        while(head2!=NULL){
            if(head1 -> val != head2 -> val){
                return 0;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
        return 1;
    }
};