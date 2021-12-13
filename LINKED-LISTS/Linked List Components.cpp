class Solution {
public:
    
    bool search(vector<int>& nums,int k)
    {
        int s=0;
        int e=nums.size()-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(nums[mid]==k)
                return true;
            if(nums[mid]<k)
                s=mid+1;
            else
                e=mid-1;
        }
        return false;
    }
    
    
    int numComponents(ListNode* head, vector<int>& nums) {
        sort(nums.begin(),nums.end());
        ListNode *temp=head;
        int tot=0,curr=0;
        while(temp)
        {
            int value=temp->val;
            bool res=search(nums,value);
            if(res)
                curr++;
            else
            {
                if(curr)
                {
                    tot++;
                    curr=0;
                }
            }
            temp=temp->next;
        }
        if(curr)
            tot++;
        return tot;
    }
};
