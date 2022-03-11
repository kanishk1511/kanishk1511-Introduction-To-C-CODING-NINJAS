int findUnique(int *arr, int size){
	for(int i = 0 ; i < size; i++){
        int flag=0;
		
        for(int j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=flag+1;
            }
        }
        
        if(flag==1)
        {
            return arr[i];
        }
	}
}
