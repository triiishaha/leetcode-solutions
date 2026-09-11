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
    ListNode* reverseLL(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* front = NULL;

        while(temp!=NULL)
        {
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* temp = head;

        while(fast->next!=NULL && fast->next->next!=NULL )
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newhead = reverseLL(slow->next);
        ListNode* first = head;
        ListNode* second = newhead;
        while(second!=NULL)
        {
            if(first->val != second->val)
            {
                reverseLL(newhead);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        reverseLL(newhead);
        return true;


        
    }
};
