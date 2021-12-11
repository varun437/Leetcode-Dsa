class Solution {
public:
    
    ListNode *rev(ListNode *head)
    {
        if(!head)
            return head;
        ListNode *curr=head;
        ListNode *prev=NULL,*next=head;
        while(next!=NULL)
        {
            next=next->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        stack<int> s;
        head=rev(head);
        while(head)
        {
            if(s.empty())
            {
                v.push_back(0);
                s.push(head->val);
                head=head->next;
            }
            else if(s.top()>head->val)
            {
                v.push_back(s.top());
                s.push(head->val);
                head=head->next;
            }
            else
            {
                s.pop();
            }
            
        }
        reverse(v.begin(),v.end());
        return v;

    }
};
