#include<climits>
int findSecondLargest(int *arr , int n){
    int largest = INT_MIN;
    int slargest = INT_MIN;
    for(int i = 0 ; i < n ; i++ ){
        largest = max(largest , arr[i] );
    }for(int i = 0 ; i < n ; i++){
        if(arr[i] != largest){
            slargest = max(slargest , arr[i]);
            
        }
    }if(slargest != INT_MIN){
        return slargest;
        
    }else{
        return INT_MIN;
    }
}
