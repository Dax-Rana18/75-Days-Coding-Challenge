#include <bits/stdc++.h>
void bubbleSort(vector<int> &arr, int n)
{
    // Write your code here.
    bool swapped=false;// to check if the internal element is swapped or not
    for (int j = 0; j < n - 1; j++)
    //for round 0 to n-1
    {
        for (int i = 0; i < n -j-1; i++)
        // for processing element till n-j element
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped=true;
            }
        }
        if(swapped== false){
            //already sorted hai 
            break;
        }
    }
}