class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> v(nums);
        int n=v.size();
        sort(v.begin(),v.end());
        unordered_map<int,int> mp;
        for(int i=n-1;i>=0;i--)
        {
            mp[v[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=mp[nums[i]];
        }
        return nums;
            
    }
};
