int length (char str[]){
    int count = 0;
    for(int i = 0 ; str[i] != '\0' ; i++){
        count++;
    }
    return count;

}

void replaceCharacter(char str[], char c1, char c2) {
    for(int i = 0 ; i < length(str) ; i++){
        if(c1 == str[i]){
            str[i] = c2;

        }
     }
}
