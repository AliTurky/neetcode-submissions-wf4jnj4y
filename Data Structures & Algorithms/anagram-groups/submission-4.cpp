class Solution {
public:
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>>result;
    unordered_map<string,vector<string>>map;
    for(auto s : strs)
    {
        vector<int>freq(26,0);
        for(auto c : s)
        {
            freq[c - 'a']++;
        }
        string key;
        for (int i = 0; i < 26; ++i) {
            key+=freq[i]+',';
        }
        map[key].push_back(s);
    }
    for(auto mp : map)
    {
        result.push_back(mp.second);
    }
    return result;

}
};
