class Solution {
public:
int largestRectangleArea(vector<int>& heights) {
    int area=0;
    int width = 1;
    int height;
    for (int i = 0; i <heights.size(); ++i) {
        width = 1;
            area = max(area,(heights[i]*width));
            height = heights[i];
        for (int j = i+1; j <heights.size(); ++j) {
                width++;
                height = min(height,heights[j]);
                area = max(area,(height*width));
        }
    }
    return area;
}
};
