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
    int pairSum(ListNode* head) {
        ListNode* p = head;
        int n = 0;
        while(p != NULL){
            n++;
            p = p->next;
        }

        p = head;
        int i = 0;
        stack<int> stk;
        while(i<n/2){
            stk.push(p->val);
            p = p->next;

            i++;
        }

        int maxsum = 0;
        while(i < n){
            maxsum = max(stk.top() + p->val, maxsum);
            p = p->next;
            stk.pop();
            i++;
        }

        return maxsum;
    }
};