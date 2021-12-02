class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
       ListNode *newhead= new ListNode(-1),*temp;
        newhead->next=head;
        head=newhead;
        while(head->next)
        {
            if(head->next->val==val)
            {
                temp=head->next;
                head->next=head->next->next;
                delete temp;
            }
            else
            {
                head=head->next;
            }
        }
        return newhead->next;
        
    }
};
