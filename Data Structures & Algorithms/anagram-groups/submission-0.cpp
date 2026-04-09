class Solution {
public:
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> v;
    unordered_map<string,vector<string>> mp;
    for(string s : strs)
    {
        string key = s;
        sort(key.begin(),key.end());
        mp[key].push_back(s);
    }
    for(auto s : mp)
    {
        v.push_back(s.second);
    }
    return v;

}
};
