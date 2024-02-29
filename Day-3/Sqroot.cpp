#include <iostream>
using namespace std;
long long int mySqroot(int x){
    int s=0,e=x;
    long long int mid=(s+e)/2;
    long long int ans=-1;
    while(s<=e){
        long long int sq=mid*mid;
        if(sq==x){
           return mid;
        }
        else if(sq<x){
             ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        
        mid=(s+e)/2;
    } return ans;
}
double precise(int n,int precision,int tempSol){
        double factor=1;
        double ans=tempSol;
        for(int i=0;i<precision;i++){
            factor=factor/10;
            for(double j=ans;j*j<n;j+=factor){
                ans=j;
            }
        }
        return ans;
}
int main()
{
    int root=mySqroot(8);
    cout<<root<<endl;
    cout<<"Enter precision:"<<endl;
    int precision;
    cin>>precision;
    cout<<precise(8,precision,root)<<endl;
    return 0;
}