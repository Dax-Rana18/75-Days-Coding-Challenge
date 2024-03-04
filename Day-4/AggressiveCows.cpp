bool isDistance(vector<int> &stalls, int n,int k,int mid){
    int cowCount=1;
    int last=stalls[0];
    //last is basically last position of the cow where it was placed 
    for(int i=0;i<n;i++){
        if((stalls[i]-last)>=mid){
            cowCount++;
        if(cowCount>=k){

            return true ;
        }
            last=stalls[i];
            //this is the new position of cow from where we will compare its distance from the next cow 
        }
        }
        return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    // k denotes no of cows 
    // no of positions would be end
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int s=0;
    int e=stalls[n-1];// or max element -min element 
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(isDistance(stalls,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}