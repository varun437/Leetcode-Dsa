class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *prev,*tail,*head=list1;
        int x=a-1;
        while(x--)
        {
            head=head->next;
        }
        prev=head;
        b=b-a+1;
        while(b--)
        {
            head=head->next;
        }
        tail=head->next;
        head->next=NULL;
        prev->next=list2;
        while(prev->next!=NULL)
        {
            prev=prev->next;
        }
        prev->next=tail;
        return list1;
        
    }
};
