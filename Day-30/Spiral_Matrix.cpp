class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;
    
    while (top <= bottom && left <= right) {
        // left to right.
        for (int j = left; j <= right; ++j) result.push_back(matrix[top][j]);
        ++top;
        
        // downwards.
        for (int i = top; i <= bottom; ++i) result.push_back(matrix[i][right]);
        --right;
        
        if (top <= bottom) {
            // right to left.
            for (int j = right; j >= left; --j) result.push_back(matrix[bottom][j]);
            --bottom;
        }
        
        if (left <= right) {
            // upwards.
            for (int i = bottom; i >= top; --i) result.push_back(matrix[i][left]);
            ++left;
        }
    }
    
    return result;
    }
};