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
        if(head == NULL || head->next == NULL){
            return head;
        }
        if(head->next->next == NULL){
            ListNode* temp = head->next;
            temp->next = head;
            head->next = NULL;
            return temp;
        }
        ListNode* p = head;
        ListNode* q = p->next;
        ListNode* r = q->next;

        while(q != NULL){
            q->next = p;
            p = q;
            q = r;
            if(r->next == NULL){
                head->next = NULL;
                q->next = p;
                return q;
            }
            r = r->next;
        }
        head->next = NULL;
        return q;
    }
};