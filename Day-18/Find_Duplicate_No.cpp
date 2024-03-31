class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int slow = nums[0];
        int fast = nums[0];
        
        // find the intersection point
        while (true) {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if (slow == fast) {
                break;
            }
        }
        
        // find the start of the cycle
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return slow; // Duplicate number
    }
};