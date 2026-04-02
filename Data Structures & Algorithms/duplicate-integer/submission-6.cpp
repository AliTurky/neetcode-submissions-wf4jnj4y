class Solution {
public:
  bool hasDuplicate(vector<int>& nums) {

        unordered_map<int,int> x;
     int size = nums.size();
     bool flag = false;
     for (int i = 0; i < size; ++i) {
         x[nums[i]]++;
         if(x[nums[i]] > 1)
         {
             flag = true;
         }
     }
     return flag;
 }

};