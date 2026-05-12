class Solution {
public:
int trap(vector<int>& height) {
    int l,r,maxLeft,maxRight,ans;
    l=0;
    r=height.size()-1;
    maxLeft=height[l];
    maxRight=height[r];
    ans=0;
    while(l<r)
    {

        if(maxLeft<maxRight)
        {
            l++;
            maxLeft=max(height[l],maxLeft);
            ans+=(maxLeft)-height[l];
        }
        else
        {
            r--;
            maxRight=max(height[r],maxRight);
            ans+=(maxRight)-height[r];
        }

    }
    return ans;
}
};
