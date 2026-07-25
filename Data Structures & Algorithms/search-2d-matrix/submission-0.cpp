class Solution {
public:
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int columns = matrix[0].size();
    int left =0;
    int right = (rows * columns) -1;
    int mid;
    while(left <= right)
    {
        mid = left + (right - left) /2;
        int row = mid / columns;int column = mid % columns;
        if(target == matrix[row][column])
        {
            return true;
        }
        else if(target > matrix[row][column])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}
};
