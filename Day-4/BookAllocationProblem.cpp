// int max(vector<int>& arr, int n){
//         int max=0;
//         for(int i=0;i<n-1;i++){
//           if (max < arr[i]) {
//             max=arr[i];
//           }
//     }
//     return max;
// }
// int findPages(vector<int>& arr, int n, int m) {
//     // Write your code here.
//     if(n<m){
//         return -1;
//     }
//     if(n==m){
//         return max(arr,n);
//     }
//     int sum=0;
//     for(int i=0;i<n-m+1;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }
bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int StudentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            StudentCount++;
            if (StudentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
int findPages(vector<int> arr, int n, int m)
{
    // Write your code here.
    int s = 0;
    int sum=0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        sum = sum + arr[i];
    }
    int e=sum;
    int ans = -1;
      if(m>n) 

        return -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        // if not possible s otion
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}