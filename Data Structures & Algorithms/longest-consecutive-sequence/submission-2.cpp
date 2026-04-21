class Solution {
public:
int longestConsecutive(vector<int>& nums) {
    set<int> set(nums.begin(),nums.end());
    if(set.empty())
    {
        return 0;
    }
    int result = 0;
    int streak = 1;
    //  1 2 6 7 8
    for (auto s : set)
    {
        int x = s;

        if(set.count(x+1))
        {
            streak++;
        }
        else
        {
            streak = 1;
        }
        result = max(result,streak);
    }

    return result;
}
};
