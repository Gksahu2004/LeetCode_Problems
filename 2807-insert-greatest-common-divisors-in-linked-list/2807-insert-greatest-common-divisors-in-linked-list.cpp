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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        int gcdno;
        ListNode* a = head;
        ListNode* b = head->next;
        while(b != NULL){
            if(a->val <= b->val) gcdno = gcd(a->val, b->val);
            else gcdno = gcd(b->val, a->val);

            ListNode* temp = new ListNode(gcdno);
            // temp->val = gcdno;
            temp->next = b;
            a->next = temp;

            a = b;
            b = b->next;
        }

        return head;
    }
};