//Peak Index in a mountain array (leetcode ques 852)
// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int s = 0;
//         int e = arr.size() - 1;
//         int mid = s - ((e + s) / 2);
//         while (s < e) {
//             if (arr[mid] < arr[mid + 1]) {
//                 s = mid + 1;
//             } else {
//                 e = mid;
//             }
//             mid = s - ((e + s) / 2);
//         }
//         return s;
//     }
// };
#include<vector>
using namespace std;

class Solution {
public:
  
    int find_pivot(vector<int> v) {
	int s = 0, e = v.size() - 1;
	int mid=(s + e) / 2;
	while (s < e)
	{
		if(v[mid] < v[mid+1])
     			s=mid+1;
    		else
      			e = mid;
    
		mid = (s + e) / 2;
	}
	return s;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return find_pivot(arr);
    }
};