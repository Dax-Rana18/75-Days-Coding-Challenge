//to move all zeros to the right side
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZero=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[j],nums[nonZero]);
                //since we want all non zero elements to the left side of the array so swapping with 0th index and then appending it
                nonZero++;
            }
        }
    }
};
// to move all zeros to teh left side:just small change in code if(nums[j]==0)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZero=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==0){
                swap(nums[j],nums[nonZero]);
                //since we want all non zero elements to the left side of the array so swapping with 0th index and then appending it
                nonZero++;
            }
        }
    }
};