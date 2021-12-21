class Solution {
public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        
        vector<vector<ListNode*>>vec;
        int c=1;
        while(head)
        {
            int k=c;
            vector<ListNode*>v;
            while(k-- && head)
            {
                v.push_back(head);
                head=head->next;
            }
            vec.push_back(v);
            c++;
        }
        
        ListNode* res=new ListNode(0);
        ListNode *dummy=res;
        for(auto it:vec)
        {
            vector<ListNode*>temp=it;
            if(temp.size()%2==0)
            {
                reverse(temp.begin(),temp.end());
            }
            for(auto i:temp)
            {
                res->next=i;
                res=res->next;
            }
        }
        res->next=NULL;
        return dummy->next;
        
    }
};
