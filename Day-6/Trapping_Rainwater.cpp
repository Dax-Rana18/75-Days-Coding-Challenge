#include<bits/stdc++.h>
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int count=0;
        // int maxi=0,mini=0;
        for(int i=1;i<n;i++){
            int mini=0;
            int maxi1=height[i];
            int maxi2=height[i];

            for(int j=0;j<i;j++){
                if(height[j]>maxi1){
                    maxi1=height[j];
                    // break;
            }
            }

            for(int k=i+1;k<n;k++){
                if(height[k]>maxi2){
                    maxi2=height[k];
                    // break;
            }
            }

            mini=min(maxi1,maxi2);
            count+=mini-height[i];
    }
    return count;
}
};