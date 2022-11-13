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
    bool hasCycle(ListNode *head) {
        if(head ==NULL || head->next == NULL)return false;
        ListNode * a =head;
        ListNode * b = head;
        while(a->next!=NULL && a->next->next !=NULL){
            a= a->next->next;
            b= b->next;
            if(a==b) return true;
        }       
        return false;
        
    }
};