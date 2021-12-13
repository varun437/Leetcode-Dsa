class Solution {
public:
    
    ListNode *root;
    Solution(ListNode* head) {
        root=head;
    }
    
    int getRandom() {
        ListNode *ans=NULL;
        ListNode *curr=root;
        int i=1;
        while(curr)
        {
            if(rand()%i==0)
            {
                ans=curr;
            }
            i++;
            curr=curr->next;
        }
        return ans->val;
    }
};
