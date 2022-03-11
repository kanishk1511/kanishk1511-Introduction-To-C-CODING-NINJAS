void removeAllOccurrencesOfChar(char str[], char c) {
    int index = 0;
    char n = strlen(str);    
    for(int i = 0 ; str[i]!= '\0' ; i++){
        if(str[i] != c){
            str[index] = str[i];
            index++;

        }
    }
    str[index] = '\0';
    // Write your code here
}
