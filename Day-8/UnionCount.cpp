class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int> ele;
        for(int i=0; i<n; i++){
            ele.insert(a[i]);
        }
          for(int j=0; j<m; j++){
            ele.insert(b[j]);
        }
        return ele.size();
    }
};