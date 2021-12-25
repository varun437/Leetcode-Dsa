class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode();
        ListNode *dummy=head;
        int sum,carry=0;
        while(l1 || l2)
        {
            sum=carry;
            if(l1)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            dummy->next=new ListNode(sum%10);
            carry=sum/10;
            dummy=dummy->next;
        }
        if(carry)
        {
            dummy->next=new ListNode(carry);
        }
        return head->next;
    }
};
