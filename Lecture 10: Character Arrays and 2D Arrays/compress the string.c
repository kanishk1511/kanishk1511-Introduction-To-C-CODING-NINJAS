#include<cstring>
void stringCompression(char input[]){
    int j = 0;
     int k = 0;
    for(int i = 0  ;input[i] != '\0' ; i++){
        int count = 0;
        j = i;
        while(input[j] == input[i]){
            count++;
            j++;
            
        }
        input[k] = input [i];
        k++;
        if(count > 1){
            input[k]=count+48;
            k++;
            }
        i = j - 1;
        }
    input[k] = '\0';
    }
