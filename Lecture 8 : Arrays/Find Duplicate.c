int duplicateNumber(int *arr, int size)
{
    //Write your code here
	  bool flag;
   
   for(int i=0; i<size; i++){
        flag=false;
      for(int j=i+1; j<size; j++ ){
         if(arr[i]==arr[j]){
            return arr[i];
             
			
             
         }        
      }
}
}
