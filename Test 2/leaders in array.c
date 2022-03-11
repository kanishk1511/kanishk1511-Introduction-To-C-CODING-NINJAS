
void Leaders(int* arr,int len)
{
        for (int i = 0; i < len; i++)
    {
        int j;
        for (j = i+1; j < len; j++)
        {
            if (arr[i] < arr[j])
            {
                break;
            }
        }
        if (j == len) 
        {
            cout << arr[i] << " ";
  }
}
}
