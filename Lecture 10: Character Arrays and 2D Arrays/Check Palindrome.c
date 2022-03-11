
int length(char str[]){
    int count = 0;
    for(int i = 0 ; str[i] != '\0' ; i++){
        count++;

    }
    return count;
}


bool checkPalindrome(char str[] ){
    int i = 0;
    int j = length(str) - 1-i;
    while(i <= length(str)/2){
        if(str[i] != str[j]){
            return false;
            
        }
        i++;
        j--;
                     
        
    }
    return true;
    
    
    
}


