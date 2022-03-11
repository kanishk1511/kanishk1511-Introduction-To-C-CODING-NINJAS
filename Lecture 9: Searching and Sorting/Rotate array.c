void reverse(int *arr, int s , int n ){
    int i = s;
    int j = n;
    while( i < j ){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
        
        
    }
    
}
void rotate(int *input, int d, int n)
{
    reverse(input,  0 , n - 1);
    reverse(input, 0 , n - d - 1);
    reverse(input,n - d , n - 1);

    //Write your code here
}
