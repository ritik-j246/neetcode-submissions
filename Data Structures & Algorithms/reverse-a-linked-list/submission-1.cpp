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
        if(head==NULL) return head;
        if(head->next==NULL) return head;
        struct ListNode* temp = head;
        struct ListNode* end = NULL;
        struct ListNode* st = head->next;
        while(head->next!=NULL)
        {
            head = st;
            st = st->next;
            temp->next = end;
            end = temp;
            temp = head;
        }
        head->next=end;
        return head;

        
    }
};
