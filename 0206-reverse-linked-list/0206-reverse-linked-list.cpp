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
        if(head == NULL)return head;
            ListNode* pre =NULL;
            ListNode* crt =head;
            ListNode* net;
        while(crt!=NULL){
            net=crt->next;
            crt->next=pre;
            pre=crt;
            crt=net;
            
        }     
        return pre;
    }
};