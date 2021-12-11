class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode *odd=new ListNode(-1);
        ListNode *even=new ListNode(-1);
        int i=0;
        ListNode *tempo=odd;
        ListNode *tempe=even;
        while(head)
        {
            if(i%2==0)
            {
                odd->next=head;
                odd=odd->next;
            }
            else
            {
                even->next=head;
                even=even->next;
            }
            head=head->next;
            i++;
        }
        even->next=NULL;
        odd->next=tempe->next;
        return tempo->next;
        
    }
};
