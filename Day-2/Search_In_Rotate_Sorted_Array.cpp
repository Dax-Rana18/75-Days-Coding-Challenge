int pivotElement(vector<int>& arr, int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
       mid=s+(e-s)/2;

    } return s;
}
int BinarySearch(vector<int>& arr,int s,int e,int key){
    int start=s,end=e;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //right wala part
        else if(arr[mid]<key) {
             start=mid+1;
        }
        else{
            end=mid-1;
        }
       mid=start+(end-start)/2;

    } return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int pivot=pivotElement(arr, n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        //BS on 2nd line
       return  BinarySearch(arr,pivot,n-1,k);
    }
    else{
        //BS on 1st line
       return BinarySearch(arr,0,pivot-1,k);
    }
}
