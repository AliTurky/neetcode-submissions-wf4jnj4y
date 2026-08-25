class Solution {
public:
 bool canShip(const vector<int>& weights, int days, int cap) {
    int ships = 1, currCap = cap;
    for (int w : weights) {
        if (currCap - w < 0) {
            ships++;
            if (ships > days) {
                return false;
            }
            currCap = cap;
        }
        currCap -= w;
    }
    return true;
}
int shipWithinDays(vector<int>& weights, int days) {
    //range if capacity max(weight[i]) -> sum of weights
    int right;int left=0;
    for (int i = 0; i < weights.size(); ++i) {
        right+=weights[i];
        left = max(left,weights[i]);
    }
    int mid,res;
    while(left<=right)
    {
        mid = left +(right-left)/2;
        if(canShip(weights,days,mid))
        {
            res=mid;
            right = mid -1;
        }
        else
        {
            left=mid+1;
        }
    }
    return res;
}
};