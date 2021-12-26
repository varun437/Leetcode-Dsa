class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *dummy=new ListNode();
        ListNode *temp=dummy;
        vector<int> v;
        for(int i=0;i<lists.size();i++)
        {
            ListNode *list=lists[i];
            while(list)
            {
                v.push_back(list->val);
                list=list->next;
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            temp->next=new ListNode(v[i]);
            temp=temp->next;
        }
        return dummy->next;
    }
};
