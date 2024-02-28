#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int rotate(int arr1[],int n,int arr2[]){
    int count=0;
    //arr=[1,3,5,7,9] rotated=2 times > arr=[7,9,1,3,5]
    //1st for loop for checking the rotate counter 
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
    //     for(int i=0;i<n;i++){
    //     cout<<temp[i]<<endl;;
    // }
    //for comparison
    for(int i=0;i<n;i++){
        if(arr2[i]==temp[i])
        count++;
    }
    if(count==n){
        return 1;
    }
    else{
        return 0;
    }
}




int main()
{
    int arr1[5]={1,3,5,7,9};
    int arr2[5]={7,9,1,3,5};
    int n=5;
    int rot=rotate(arr1,5,arr2);
    if(rot){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}