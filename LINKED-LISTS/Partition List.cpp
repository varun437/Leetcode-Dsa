class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *temp=head;
        ListNode *dummy=new ListNode(0);
        ListNode *curr=dummy;
        
        while(temp)
        {
            if(temp->val<x)
            {
                curr->next=new ListNode(temp->val);
                curr=curr->next;
            }
            temp=temp->next;
        }
        
        temp=head;
        while(temp)
        {
            if(temp->val>=x)
            {
                curr->next=new ListNode(temp->val);
                curr=curr->next;
            }
            temp=temp->next;
        }
        
        return dummy->next;
        
    }
};
