class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int> order;
        while(temp!=NULL)
        {
            order.push_back(temp->val);
            temp = temp->next;
        }
        
        sort(order.begin() , order.end());
        temp = head;
        int index = 0;
        while(temp!=NULL)
        {
            temp->val = order[index++];
            temp = temp->next;
        }
        return head;
    }
};
