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
        ListNode *next = NULL;
        ListNode *tmp = NULL;
        while(head){
            tmp = new ListNode(head->val);
            if(next){
                tmp->next = next;
            }
            next = tmp;
            head = head->next;
        }
        return tmp;

    }
};