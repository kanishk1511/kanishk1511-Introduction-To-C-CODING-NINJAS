void sort012(int arr[], int n)
{
    int a0=0,a1=0,a2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            a0++;
        }
        else if(arr[i]==1){
            a1++;
        }
        else {a2++;}
    }
    for(int i=0;i<a0;i++){
        arr[i]=0;
    }
    for(int i=0;i<a1;i++){
        arr[a0+i]=1;
    }
    for(int i=0;i<a2;i++){
        arr[a1+a0+i]=2;
    }
}
