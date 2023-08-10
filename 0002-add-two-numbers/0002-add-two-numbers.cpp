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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *l3 = new ListNode(0);
        ListNode *ans = l3;
        int carry = 0;
        int sum = 0;
        
        while(l1 && l2){
            sum = l1->val + l2->val + carry;
            carry = sum / 10;
            l1 = l1->next;
            l2 = l2->next;
            l3->next = new ListNode(sum % 10);
            l3 = l3->next;
        }
        
        while(l1){
            sum = l1->val + carry;
            carry = sum / 10;
            l1 = l1->next;
            l3->next = new ListNode(sum % 10);
            l3 = l3->next;
        }
        
        while(l2){
            sum = l2->val + carry;
            carry = sum / 10;
            l2 = l2->next;
            l3->next = new ListNode(sum % 10);
            l3 = l3->next;
        }
        
        if(carry){
            l3->next = new ListNode(carry);
        }
        
        return ans->next;
    }
};