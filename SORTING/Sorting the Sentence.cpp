class Solution {
public:
    string sortSentence(string s) {
        stringstream words(s);
        string word;
        string res="";
        unordered_map<int,string> mp;
        while(words>>word)
        {
            int len=word.size()-1;
            mp[word[len]-'0']=word.substr(0,len) + " ";
        }
        for(int i=0;i<mp.size();i++)
        {
            res+=mp[i];
        }
        return res.substr(0,res.size()-1);
    }
};
