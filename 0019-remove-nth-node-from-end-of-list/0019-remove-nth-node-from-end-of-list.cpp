class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL) return NULL;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(n != 0) {
            fast = fast->next;
            n--;
        }
        
        while(fast != NULL && fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        
        if(slow == head && fast == NULL) return head->next;
        
        slow->next = slow->next->next;
        return head;
    }
};