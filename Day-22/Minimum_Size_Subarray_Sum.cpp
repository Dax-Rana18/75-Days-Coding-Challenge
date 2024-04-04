class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
            int minLength = INT_MAX;
    int left = 0;
    int sum = 0;
    
    for (int right = 0; right < nums.size(); ++right) {
        sum += nums[right];
        
        while (sum >= target) {
            minLength = std::min(minLength, right - left + 1);
            sum -= nums[left++];
        }
    }
    //teranryu operator used
    return minLength != INT_MAX ? minLength : 0;
    }
};