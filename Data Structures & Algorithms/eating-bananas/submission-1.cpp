class Solution {
public:

int minEatingSpeed(vector<int>& piles, int h) {
    int left =1;
    int right ;
    int maximum = 0;
    int result;
    for (int i = 0; i < piles.size(); ++i) {
        maximum = max(maximum,piles[i]);
    }
    right = maximum;
    while(left <= right)
    {
        int k = left + (right - left) /2;
        int total_hours=0;
        for (int i = 0; i < piles.size(); ++i) {
            total_hours+=ceil(double(piles[i])/k);
        }
        if(total_hours <= h)
        {
            result=k;
            right = k - 1;
        }
        else
        {
            left = k +1;
        }
    }
    return result;
}
};
