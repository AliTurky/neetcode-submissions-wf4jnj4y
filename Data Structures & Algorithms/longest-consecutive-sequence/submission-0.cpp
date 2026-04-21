class Solution {
public:
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> set(nums.begin(),nums.end());
    int result = 0;
    for(auto num : nums)
    {
        int streak = 0;
        int x = num;
        while(set.count(x))
        {
            x++;
            streak++;
        }
        result = max(result,streak);
    }

    return result;
}
};
