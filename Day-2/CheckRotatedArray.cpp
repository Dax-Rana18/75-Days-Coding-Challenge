#include <iostream>
using namespace std;

int main()
{
    int count=0;
        int arr1[5]={1,3,5,7,9};
    int arr2[5]={7,9,1,3,5};
    int n=5;
    int rotate;
    for(int i=0;i<n;i++){
        if(arr1[0]==arr2[i]){
            rotate=i;
            break;
        }
    }
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+rotate)%n]=arr1[i];
    }
    //cout temp
        for(int i=0;i<n;i++){
        cout<<temp[i]<<endl;;
    }
    for(int i=0;i<n;i++){
        if(arr2[i]==temp[i])
        count++;
    }
    if(count==n){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No";
    }
    return 0;
}