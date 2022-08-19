class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     map<string,vector<string>>mp;
        for(string s : strs)
        {
            string ss=s;
            sort(ss.begin(),ss.end());
            mp[ss].push_back(s);
        }
        vector<vector<string>>v;
        for(auto p : mp)
        {
            v.push_back(p.second);
        }
        return v;
    }
};