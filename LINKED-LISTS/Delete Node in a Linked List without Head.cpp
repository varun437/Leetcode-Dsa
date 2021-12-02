class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *temp=node->next;
        swap(node->val,temp->val);
        node->next=temp->next;
        delete temp;
    }
};
