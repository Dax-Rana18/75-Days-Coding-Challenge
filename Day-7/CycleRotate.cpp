
void rotate(int arr[], int n)
{
    int temp=0;
    for(int i=n-1;i>0;i--){
        //elemnt at i index goes to i-1
        //array started from reverse 
        temp=arr[i-1];
        arr[i-1]=arr[i];
        arr[i]=temp;
    }
}