#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=10;
    int c1=0,c2=0,c3=0;
    vector<int> dp(n+1);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        dp[i]=min(2*dp[c1],min(3*dp[c2],5*dp[c3]));
        if(dp[i]==2*dp[c1]){
            c1++;
        }
        if(dp[i]==3*dp[c2]){
            c2++;
        }
        if(dp[i]==5*dp[c3]){
            c3++;
        }
    }
    cout<<dp[n-1];
}