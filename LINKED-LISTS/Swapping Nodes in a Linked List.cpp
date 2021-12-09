class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *s=head,*temp=head;
        int len=k-1;
        while(len--)
        {
            temp=temp->next;
        }
        ListNode *te=temp;
        
        while(temp->next)
        {
            s=s->next;
            temp=temp->next;
        }
        swap(te->val,s->val);
        return head;
    }
};
