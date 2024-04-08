#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr) {
    //size of the array:
    int n = arr.size();

    // XOR all the elements:
    int x = 0;
    for (int i = 0; i < n; i++) {
        x = x ^ arr[i];
    }
    return x;
}
