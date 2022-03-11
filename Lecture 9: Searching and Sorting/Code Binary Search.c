int binarySearch(int *arr, int n, int x)
{
    //Write your code here
    int start=0, end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(x<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}
