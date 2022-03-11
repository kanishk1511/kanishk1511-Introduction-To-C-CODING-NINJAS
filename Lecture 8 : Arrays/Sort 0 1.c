void sortZeroesAndOne(int *input, int size)
{
	int count0 = 0;
	int count1 = 1;
	for (int i = 0; i < size; i++)
	{
		if(input[i] == 0){
			count0++;
		}else{
			count1++;
		}

		/* code */
	}
	for(int i = 0 ; i < count0 ; i++){
		input[i] = 0;

	
	}
	for(int i = count0 ; i < size ; i++){
		input[i] = 1;

	
	}
	

    //Write your code here
}
