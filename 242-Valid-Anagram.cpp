//Blind75
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, char> m = {};
        int count = 0;
        int sizes = s.length();
        int sizet = t.length();
        
        if(sizes!=sizet)
        {
            return false;
        }
        
        for(int i = 0; i < sizes; i++)
        {
            if(m.find(s[i]) != m.end())
            {
                m[s[i]]++;
            }
            else
            {
                m[s[i]] = 1;
            }
        }
        
        for(int i = 0; i < sizet; i++)
        {
            if(m.find(t[i]) != m.end())
            {
                m[t[i]]--;
            }
        }
        
        for(auto x: m)
        {
            if(x.second != 0)
            {
                return false;
            }
        }
        return true;
    }
};
