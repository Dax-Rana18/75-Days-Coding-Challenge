bool isArr(vector<int> arr, int m,int n,int mid){
    int painterCount=1;
    int TimeSum=0;
    for(int i=0;i<n;i++){
        if(TimeSum + arr[i] <=mid){
            TimeSum+=arr[i];
        }
        else{
            painterCount++;
            if(painterCount>m || arr[i]>mid){
                return false;
            }
            TimeSum=arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &arr, int m)
{
    int s=0;
    int sum=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    if(m>n) 

        return -1;
    while(s<=e){
        if(isArr(arr,m,n,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}