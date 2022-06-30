class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        if(strs.size() == 0)
        {
            return res;
        }
        unordered_map<string, vector<string>> h;
        for(string s: strs)
        {
            string key = s;
            std::sort(key.begin(), key.end());
            h[key].push_back(s);
        }
        for(auto p:h)
        {
            res.push_back(p.second);
        }
        return res;
    }
};
