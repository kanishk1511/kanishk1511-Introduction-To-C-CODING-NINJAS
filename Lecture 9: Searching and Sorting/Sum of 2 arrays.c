void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int i=size1-1,j=size2-1,k,r=0;
    if(size1>size2)
        k=size1;
    else
        k=size2;
    while(k>=0){
        if(j<0){
            j=0;
            input2[0]=0;
        }
        if(i<0){
            i=0;
            input1[0]=0;
    }
        output[k]=input1[i]+input2[j]+r;
        r=output[k]/10;
        output[k]=output[k]%10;
        k--;
        i--;
        j--;
    }
    //Write your code here
}
