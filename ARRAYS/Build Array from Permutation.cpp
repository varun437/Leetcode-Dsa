class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n);
        for(int i=0;i<v.size();i++)
            v[i]=nums[nums[i]];
        return v;
    }
};
