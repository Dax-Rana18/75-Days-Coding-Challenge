#include <bits/stdc++.h>

using namespace std;

// BruteForce ( Will Work in Exam Hopefully )
vector<int> nextGreaterElements(vector<int>& nums) {

    int n = nums.size();

    vector<int> ans(n, -1);

    for (int i=0; i<nums.size(); i++) {

        bool flag = false;
        for (int j=i+1; j<nums.size(); j++) {
            if (nums[j] > nums[i]) {
                flag = true;
                ans[i] = nums[j];
                break;
            }
        }

        if (flag) continue;

        for (int j=0; j<i; j++) {
            if (nums[j] > nums[i]) {
                ans[i] = nums[j];
                break;
            }
        }
    }

    return ans;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n, 0);

    for (int i=0; i<n; i++) cin >> arr[i];

    auto ans = nextGreaterElements(arr);

    for (int i : ans) cout << i << " ";

    cout << endl;

    return 0;
}