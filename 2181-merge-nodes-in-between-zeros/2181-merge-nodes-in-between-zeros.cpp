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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* p2 = head;
        int value;
        ListNode* p = head->next;
        while(p != NULL){
            value = 0;
            while(p->val != 0){
                value += p->val;
                p = p->next;
            }
            p2->val = value;
            if(p->next != NULL){
                p2 = p2->next;
            }
            p = p->next;
        }
        p2->next = NULL;

        return head;
    }
};