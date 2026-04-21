class Solution {
public:
vector<int> productExceptSelf(vector<int>& nums) {

    vector<int> prefix(nums.size());
    prefix[0] = nums[0];
    for (int i = 1; i < nums.size()  ; ++i) {
        prefix[i] = prefix[i-1] *  nums[i];

    }

    vector <int> suffix(nums.size());
    int suffx = 1;
    for(int i = nums.size()-1;i>=0;i--)
    {
        suffix[i]= suffx;
        suffx *=nums[i];
    }

    vector <int>output(nums.size());
    output[0] = suffix[0];
    for (int i = 1; i < nums.size() ; ++i) {
        output[i] = suffix[i] * prefix[i-1];

    }
    return output;
}
};
