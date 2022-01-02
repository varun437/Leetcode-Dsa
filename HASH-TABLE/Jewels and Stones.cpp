class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        for(auto i:jewels)
            mp[i]=0;
        int tot=0;
        for(auto i:stones)
        {
            if(mp.find(i)!=mp.end())
                tot++;
        }
        return tot;
    }
};
