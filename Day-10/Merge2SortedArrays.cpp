#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[] ,int n, int arr2[], int m,int arr3[]){
    int k=0,i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[i]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[i++];
        }
    }
    //copy 1st element array
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(i<m){
        arr3[k++]=arr2[i++];
    }
}
void printAns(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    //code kro
}