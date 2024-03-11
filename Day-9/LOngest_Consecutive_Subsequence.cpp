//{ Driver Code Starts
//variation of kadanes algorithm
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N){
        sort(arr, arr + N);
        int maxLen = 0; // Initialize the maximum length
        int currLen = 1; // Initialize the current length

        for (int i = 1; i < N; i++) {
            if (arr[i] == arr[i - 1] + 1) {
                // If the current element is consecutive to the previous one
                currLen++;
            } else if (arr[i] != arr[i - 1]) {
                // If the current element is not equal to the previous one
                maxLen = max(maxLen, currLen); // Update maxLen
                currLen = 1; // Reset currLen
            }
        }

        return max(maxLen, currLen); // Consider the last subsequence
    }
};


//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends



// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// class Solution{
//   public:
//     // arr[] : the input array
//     // N : size of the array arr[]
    
//     //Function to return length of longest subsequence of consecutive integers.
//     int findLongestConseqSubseq(int arr[], int N)
//     {
//       //Your code here
//     sort(arr,arr+N);
//     vector<int> arr1;
//     for(int i=0;i<N;i++){
//         if(arr[i]!=arr[i+1]){
//         arr1.push_back(arr[i]);
//         }
//     }
//     // sort(arr1;
    
//     int count=0;
//     for(int i=0;i<N-1;i++){
//         if(arr1[i]==i+1){
//             count++;
//         }
//         else{
//             break;
//         }
//     }
//     return count;
//     }
// };

// //{ Driver Code Starts.
 
// // Driver program
// int main()
// {
//  int  t,n,i,a[100001];
//  cin>>t;
//  while(t--)
//  {
//   cin>>n;
//   for(i=0;i<n;i++)
//   cin>>a[i];
//   Solution obj;
//   cout<<obj.findLongestConseqSubseq(a, n)<<endl;
//  }
      
//     return 0;
// }
// // } Driver Code Ends