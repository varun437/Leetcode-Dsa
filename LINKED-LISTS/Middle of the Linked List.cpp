class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr) return nullptr;
    ListNode* fast=head;
    ListNode* slow=head;
    while(fast!=nullptr&&fast->next!=nullptr)
    {
      fast=fast->next->next;
      slow=slow->next;
    }
    return slow; 
    }
};
