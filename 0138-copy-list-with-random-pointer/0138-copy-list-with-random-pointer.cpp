/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        unordered_map <Node*,Node*> m;
        Node* temp = head;
        while(temp!= NULL){
            Node* curr = new Node(temp->val);
            m[temp] = curr;
            temp=temp->next;
        }
        
        temp = head;
        while(temp!= NULL){
            Node* copy= m[temp];
            copy->next = m[temp->next];
            copy->random = m[temp->random];
            temp= temp->next;
        }
        return m[head];
    }
};