class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> m;
        int count=0;
        
        for(auto i:words1)
            m[i]++;
        for(auto i:words2)
        {
            if(m[i]<2)
            {
                m[i]--;
            }
        }
        for(auto s:m)
        {
            if(s.second==0)
                count++;
        }
        return count;
    }
};
