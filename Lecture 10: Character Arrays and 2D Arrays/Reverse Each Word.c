#include<climits>
void reverseEachWord(char str[]) {
    int len = strlen(str);
    int i = 0;
    int j = 0;
    while(i <= len)
    {
        if(str[i] == ' ' || str[i] == '\0'){
            int k = i - 1;
            while(j < k){
                char temp = str[j];
                str[j] = str[k];
                str[k] = temp;
                j++;
                    k--;
                
            }
                j = i + 1;
        }
            
                    
        i++;
            
    }
    // Write your code here
}
