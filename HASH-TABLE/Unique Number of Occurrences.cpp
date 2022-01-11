class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int>s,p;
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
              m[arr[i]]++;
        }
        for(auto x:m)
        {
          s.insert(x.second);
        }
        for(int i=0;i<arr.size();i++)
        {
           p.insert(arr[i]);
            
        }
        if(s.size()==p.size())
             return true;
        return false;
        
    }
};

                   (OR)


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(auto i: arr)
        {
            mp[i]++;
        }
        unordered_set<int> st;
        for(auto i: mp)
        {
            st.insert(i.second);
        }
        return mp.size() == st.size();
    }
};
