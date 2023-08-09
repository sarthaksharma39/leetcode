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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *pt1=list1;
        ListNode *pt2=list2;
        if(pt1==NULL){
            return list2;
        }
        if(pt2==NULL){
            return list1;
        }
        if(pt1->val < pt2->val){
            pt1->next= mergeTwoLists(pt1->next,pt2);
            return pt1;
        }
        else{
            pt2->next= mergeTwoLists(pt1,pt2->next);
            return pt2;
        }
    }
};