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
       
        node->val = node->next->val; //5 ki jagah 1 assign krdo toh 4,1,1,9
        node->next = node->next->next; // then pehle 1 ko directly uska next 9 p krdo
         // 3rd pos wala 1 hatt gya LL se as mentioned h ki memory se nhi hatana toh no free/delete



        
    }
};
