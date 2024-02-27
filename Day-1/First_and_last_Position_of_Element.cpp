#include <vector>
using namespace std;
int firstOccur(vector<int>& arr,int n,int key){
    int start=0, end=n-1;
    int ans=-1;
    int mid=start+((end-start)/2);
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid=start+((end-start)/2);;
      
    }  return ans;
    // return -1;
}
int SecondOccur(vector<int>& arr,int n,int key){
    int start=0, end=n-1;
    int ans=-1;
    int mid=start+((end-start)/2);
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid=start+((end-start)/2);;
       
    } return ans;
    // return -1;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first=firstOccur(arr, n, k);
    p.second=SecondOccur(arr, n, k);
    return p;
}
