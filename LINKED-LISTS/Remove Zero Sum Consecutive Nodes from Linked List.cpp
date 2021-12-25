ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode *temp=new ListNode();
        temp->next=head;
        for(ListNode *i=temp;i!=NULL;i=i->next)
        {
            int sum=0;
            for(ListNode *j=i->next;j!=NULL;j=j->next)
            {
                sum=sum+j->val;
                if(sum==0)
                {
                    i->next=j->next;
                }
            }
        }
        return temp->next;
    }
};
