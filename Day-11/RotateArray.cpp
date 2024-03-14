//Brute Force: Time Limit Exceeded
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size()-1;
        for(int i=0;i<k;i++){
            for(int j=n;j>0;j--){
                swap(nums[j],nums[j-1]);
            }
        }
    }
};

//Try 2: By making a new vector a running a loop
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> arr(n);
        
       for(int i=0;i<n;i++){
        if(i < n-k){
            arr[i+k]=nums[i];
        }
        else{
            arr[n-i]=nums[i];
        }
    }
    nums=arr;
    }
};
//chala nhi because gretaer than n-k walon ki koi algo nhi mil rhi thi 

//last attempt :took some hint 
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            arr[(i + k) % n] = nums[i];
        }
        nums = arr;
    }
};