#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>height={1,0,2,1,3,1,2,0,1};
    int res=0;
    int left=0,right=height.size()-1;
    int leftMax=0,rightMax=0;
    while(left<right){

        if(height[left]<=height[right]){

            if(height[left]>=leftMax){
                leftMax=height[left];
            }
            else{
                res=res+leftMax-height[left];
            }
            left++;
        }
            
    
        else{
            if(height[right]>=rightMax){
                rightMax=height[right];
            }
            else{
                res+=rightMax-height[right];
            } 
            right--;
        }
           
    }
    cout<<"Trapped rainwater blocks are:"<<res<<endl;
}