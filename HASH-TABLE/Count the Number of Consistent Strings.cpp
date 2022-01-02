class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
     
        int count=0;
        unordered_set<char> s;
        for(int i=0;i<allowed.size();i++)
            s.insert(allowed[i]);
        
        for(int i=0;i<words.size();i++)
        {
            bool ans=false;
            for(int j=0;j<words[i].size();j++)
            {
                if(s.find(words[i][j])!=s.end())
                {
                    ans=true;
                }
                else
                {
                    ans=false;
                    break;
                }
            }
            if(ans==true)
            {
                count++;
            }
        }
        return count;
    }
};
