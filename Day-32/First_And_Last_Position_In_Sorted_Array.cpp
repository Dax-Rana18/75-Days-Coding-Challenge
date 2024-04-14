class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int leftIndex = findFirst(nums, target);
        int rightIndex = findFirst(nums, target + 1) - 1;
        
        // Check if the target is not within the range of numbers in the array
        if (leftIndex < nums.size() && nums[leftIndex] == target) {
            return {leftIndex, max(leftIndex, rightIndex)};
        } else {
            return {-1, -1};
    }
    }
private:
    int findFirst(vector<int>& nums, int target) {
        int low = 0, high = nums.size(), mid;
        while (low < high) {
            mid = low + (high - low) / 2;
            if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }
};