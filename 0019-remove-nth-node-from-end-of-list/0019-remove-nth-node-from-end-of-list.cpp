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
        if(head == nullptr){
            return head;
        }
        ListNode *temp = head;
        int cnt = 0;
        
        while(temp!=nullptr){
            cnt++;
            temp=temp->next;
        }
        cout<<cnt<<endl;
        if(n== cnt){
           ListNode *newhead = head -> next;
            head -> next = nullptr;
            // delete(head);
            return newhead;
        }
        int node_index_to_remove = cnt - n;
        int i = 0;
        ListNode *curr = head;
        ListNode *prev = head;
        while(i!=node_index_to_remove){
            prev = curr;
            curr = curr->next;
            i++;
        }
        prev->next = curr->next;
        // delete(curr);
        return head;
        
        // return temp;
    }
};