class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> v(26,0);
        for(char c:sentence)
            v[c-'a']++;
        
        for(int i=0;i<26;i++)
        {
            if(v[i]==0)
                return false;
        }
        return true;
    }
};
                   

                (OR)

class Solution {
public:
    bool checkIfPangram(string s) {
        map<char,int>cntr;
        int n=s.length();
        
        for(int i=0;i<n;i++){
            cntr[s[i]]++;
        }
        for(char i='a';i<='z';i++){
            if(cntr[i]==0)
                return false;
        }
        return true;
        
    }
};
