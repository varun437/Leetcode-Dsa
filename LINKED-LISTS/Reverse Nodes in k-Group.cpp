class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head;
        int n=0;
        vector<int> v;
        while(temp)
        {
            n++;
            v.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        int j=0;
        while(n>=k)
        {
            j=i+k;
            reverse(v.begin()+i,v.begin()+j);
            i=i+k;
            n=n-k;
        }
        temp=head;
        i=0;
        while(temp)
        {
            temp->val=v[i];
            temp=temp->next;
            i++;
        }
        return head;
    }
};
