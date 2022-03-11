void pushZeroesEnd(int *arr, int size){
    int count = 0;
    for(int i = 0 ; i < size ; i++){
        if(arr[i] != 0){
            arr[count++] = arr[i];

        }
    }while(count < size){
        arr[count++] = 0;
        

    }
}
