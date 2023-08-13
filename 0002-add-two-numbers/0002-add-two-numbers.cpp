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
int carry;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead= new ListNode();
        ListNode* temp=dummyHead;
        int carry=0;
        while(l1!=NULL ||l2!=NULL ||carry!=0){
            int num1= (l1!=NULL) ? l1->val:0;
            int num2= (l2!=NULL) ? l2->val:0;
            int sum=num1+num2+carry;
            carry=sum/10;
            ListNode* newnode= new ListNode(sum%10);
            temp->next=newnode;
            temp=temp->next;
            l1= (l1!=NULL) ? l1->next:NULL;
            l2= (l2!=NULL) ? l2->next:NULL;
        }
        ListNode* ans= dummyHead->next;
        delete dummyHead;
        return ans;
    }
};