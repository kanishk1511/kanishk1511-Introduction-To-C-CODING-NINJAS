bool isPermutation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1 == len2){
        int str[256]={};// move
        for(int i=0;i<len1;i++)
        {
            str[str1[i]]++;
            str[str2[i]]--;
        }
        for(int i=0;i<256;i++)
        {
            if(str[i]!=0)
            {
                return false;
            }
        }
        return true;

    }else{
        return false;
    }
    
    // Write your code here
}
