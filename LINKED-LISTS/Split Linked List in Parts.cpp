class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        vector<ListNode*> res;
        ListNode *curr=head,*prev=NULL;
        int size=len/k;
        int extra=len%k;
        int i=0;
        while(head)
        {
            int tsize=size;
            res.push_back(curr);
            while(tsize>0)
            {
                prev=curr;
                curr=curr->next;
                tsize--;
            }
            if(extra!=0 && curr!=NULL)
            {
                prev=curr;
                curr=curr->next;
                extra--;
            }
            if(prev!=NULL)
            {
                head=curr;
                prev->next=NULL;
            }
        }
        while(res.size()!=k)
            res.push_back(NULL);
        return res;
    }
};
