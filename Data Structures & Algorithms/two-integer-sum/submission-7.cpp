class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
    vector <int>x;
    map<int,int> m;
    for(int i =0;i<nums.size();i++)
    {
        
        int diff = target - nums[i];
        if(m.count(diff) && m[diff]!=i){
            return {m[diff],i};
        }
        m[nums[i]]=i;
    }

    return x;
}
};
