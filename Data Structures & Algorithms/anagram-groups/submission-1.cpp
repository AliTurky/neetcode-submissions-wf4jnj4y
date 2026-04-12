class Solution {
public:
vector<vector<string>> groupAnagrams(vector<string>& strs) {
     vector<vector<string>> result;
     unordered_map<string,vector<string>> mp;
    for (auto s :strs)
    {
        string str  = s;
        sort(str.begin(),str.end());
        mp[str].push_back(s);
    }
    for(auto m : mp)
    {
        result.push_back(m.second);
    }

    return result;
}
};
