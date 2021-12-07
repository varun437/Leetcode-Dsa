class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
                temp=temp->next;
        }
        
        for(int i=0;i<v.size()/2;i++)
        {
            if(v[i]!=v[v.size()-i-1])
                return false;
        }
        return true;
        
    }
};
