class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int num=0;
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        count--;
        temp=head;
        while(temp!=NULL)
        {
            num=num+(temp->val)*pow(2,count);
            count--;
            temp=temp->next;
        }
        return num;
    }
};
