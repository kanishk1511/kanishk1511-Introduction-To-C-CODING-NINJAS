void swapAlternate(int *arr, int n){
   int temp;
   for(int i=0; i<n; i+=2){
      if(i!=n-1){
        temp = arr[i];
      arr[i]= arr[i+1];
      arr[i+1]=temp; 
      }
   }

}
