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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0) {
            return head;
        }
        
        ListNode* curr = head;
        int n = 1;
        while (curr->next != NULL) {
            curr = curr->next;
            n++;
        }
        
        curr->next = head;
        
        k = k % n;
        if (k == 0) {
            curr->next = NULL;
            return head;
        }
        
        int stepsToNewHead = n - k;
        
        ListNode* newTail = head;
        for (int i = 1; i < stepsToNewHead; i++) {
            newTail = newTail->next;
        }
        ListNode* newHead = newTail->next;
        
        newTail->next = NULL;
        
        return newHead;
    }
};