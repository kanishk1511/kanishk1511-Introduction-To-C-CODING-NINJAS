void arrange(int *arr, int n)
{

    int left = 0;
    int right = n - 1;
    int counter = 1;

    while (left <= right)
    {

        if (counter % 2 == 1)
        {
            arr[left] = counter;
            counter++;
            left++;
        }
        else
        {
            arr[right] = counter;
            counter++;
            right--;
        }
    }
}
