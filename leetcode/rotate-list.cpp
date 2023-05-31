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
        int length = 0;
        ListNode * cur, *tail = head;
        for(cur = head; cur != NULL; cur = cur->next)
        {
            length++;
            tail = cur;
        }

        // the case we don't need to rotate the list
        if(length <= 1 || k == 0 || (k % length) == 0)
            return head;

        k %= length;
        
        
        ListNode * prev = head;
        ListNode * newhead = head;
        for(int i = 0; i < length - k; i++)
        {
            prev = newhead;
            newhead = newhead->next;
        }
        
        tail->next = head;
        prev->next = NULL;
        return newhead;
    }
};
