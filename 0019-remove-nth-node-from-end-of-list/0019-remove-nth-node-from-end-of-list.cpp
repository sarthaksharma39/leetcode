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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        
        for(ListNode* curr=head;curr!=NULL;curr=curr->next){
            len++;
        }
        if(len<n) return 0;
        ListNode* curr=head;
        if(len==n) {
            head=head->next;
            return head;
        }
        n=len-n-1;
        len=0;
        while(curr){
            if(len==n){
                curr->next=curr->next->next;
            }
            len++;
            curr=curr->next;
        }
        
        return head;
    }
};