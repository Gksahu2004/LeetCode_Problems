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
    void deleteNode(ListNode* node) {
        // ListNode* p = node->next;
        // while(p != NULL){
        //     node->val = p->val;
        //     if(p->next != NULL){
        //         node = node->next;
        //     }
        //     p = p->next;
        // }
        // node->next = NULL;

        while(node->next != NULL){
            node->val = node->next->val;
            if(node->next->next == NULL){
                break;
            }
            node = node->next;
        }
        node->next = NULL;
    }
};