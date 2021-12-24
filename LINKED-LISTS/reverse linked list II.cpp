class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
       if(head==NULL || head->next==NULL)
       {
           return head;
       }
        
        vector<int> v;
        ListNode* temp = head;
        
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }
        
        temp = head;
        
        for(int i=1;i<left;i++)
        {
            temp = temp->next;
        }
        
        for(int i=right;i>=left;i--)
        {
            temp->val = v[i-1];
            temp = temp->next; // reversing the values
        }
        
        return head;
    }
};
