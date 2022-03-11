void removeConsecutiveDuplicates(char str[]) {
    char lastchar = str[0];
    int index = 1;
    int len = strlen(str);
    for(int i = 1 ; i < len ; i++ ){
        if(str[i] != lastchar){
            str[index] = str[i];
            index++;
            lastchar = str[i];
            
             }

    }
    str[index] = '\0';
    // Write your code here
}
