class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid =  nums.size()/2;
        int l,r;
        l=0;
        r=nums.size()-1;
        while(l<=r)
        {
           //mid = (l+r)/2;
            if(target == nums[mid])
            {
                return mid;
            }
            else if(target > nums[mid])
            {
                l=mid+1;
                mid = (l+r)/2;
            }
            else
            {
                r = mid -1;
                mid = (l+r)/2;
            }
        }
        return -1;
    }
};
