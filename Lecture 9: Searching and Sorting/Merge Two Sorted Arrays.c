void merge(int *arr1, int n1, int *arr2, int n2, int *arrk)
{ 
	int i = 0;
	int j = 0;
	int k = 0;
	
	while(i < n1 && j < n2){
		if(arr1[i] < arr2[j]){
			arrk[k] = arr1[i];
			i++;
			k++;
		}else{
			arrk[k] = arr2[j];
			j++;
			k++;
		}
	}
	while(i < n1){
		arrk[k++] = arr1[i++] ;

	}while( j < n2){
		arrk[k++] = arr2[j++];
	}

    //Write your code here    
}
