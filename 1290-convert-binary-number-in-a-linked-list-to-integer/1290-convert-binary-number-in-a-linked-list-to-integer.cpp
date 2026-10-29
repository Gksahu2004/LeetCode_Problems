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
    int getDecimalValue(ListNode* head) {
        int num = 0;
        string str = "";
        ListNode* p = head;

        while(p != NULL){
            str += '0' + p->val;
            p = p->next;
        }

        reverse(str.begin(), str.end());

        for(int i = 0; i<str.length(); i++){
            if(str[i] == '1'){
                num += pow(2, i);
            }
        }

        return num;
    }
};