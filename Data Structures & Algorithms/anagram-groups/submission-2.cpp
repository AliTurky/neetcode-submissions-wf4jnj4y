class Solution {
public:

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<int> freq(26,0);
    unordered_map<string,vector<string>>map;
    vector<vector<string>>result;
    for (auto it: strs) {
        //sort array to make the key
        string key = it;
        std::sort(key.begin(), key.end());
        map[key].push_back(it);
    }
    for(auto s : map)
    {
        result.push_back(s.second);

    }
    return result;


}
};
