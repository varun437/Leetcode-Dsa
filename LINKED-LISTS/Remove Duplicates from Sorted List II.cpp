class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode *curr=head,*prev=NULL,*nxt=curr->next;
        while(nxt)
        {
            if(curr->val==curr->next->val)
            {
                while(nxt && curr->val==nxt->val)
                    nxt=nxt->next;
                if(prev==NULL)
                    head=nxt;
                else
                    prev->next=nxt;
            }
            else
            {
                prev=curr;
            }
            curr=nxt;
            if(nxt)
                nxt=curr->next;
        }
        return head;
    }
};
