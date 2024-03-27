bool findTripletSum(int arr[], int n, int X) {
    // Sort the array
    sort(arr, arr + n);
    
    // Iterate over the array
    for (int i = 0; i < n - 2; i++) {
        // Initialize two pointers
        int left = i + 1, right = n - 1;
        
        // Use the two pointers to find the triplet
        while (left < right) {
            int current_sum = arr[i] + arr[left] + arr[right];
            
            // Check if the current sum is the one we're looking for
            if (current_sum == X) {
                return true; // Triplet found
            } else if (current_sum < X) {
                left++; // Need a larger sum
            } else {
                right--; // Need a smaller sum
            }
        }
    }
    return false; // No triplet found
}
