class Solution {
public:

vector<int> topKFrequent(vector<int>& nums, int k) {
     vector <int> ans;
    map <int,int> mp;
    for (int i = 0; i < nums.size(); ++i) {
        mp[nums[i]]++;
    }
    vector<pair<int,int>>freq;
    for(auto m : mp)
    {
        freq.push_back({m.second,m.first});
    }

    sort(freq.rbegin(),freq.rend());

    for (int i = 0; i < k; ++i) {
        ans.push_back(freq[i].second);
    }


    return ans;
}

};
