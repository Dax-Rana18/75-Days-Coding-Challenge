#include <bits/stdc++.h>
void selectionSort(vector<int> &arr, int n)
{
    // Write your code here.
    int min = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
