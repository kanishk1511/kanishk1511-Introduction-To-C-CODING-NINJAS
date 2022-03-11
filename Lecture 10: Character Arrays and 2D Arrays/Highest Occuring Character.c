
char highestOccurringChar(char str[])
{
    
    int input[256] = { 0 };
 
    // to store maximum frequency
    int max = 0;
 
    // to store the maximum occurring character
    char ans;
 
    // length of 'str'
    int n = strlen(str);
 
    // get frequency of each character of 'str'
    for (int i = 0; i < n; i++)
        input[str[i] - 'a']++;
 
    // for each character, where character is obtained by
    // (i + 'a') check whether it is the maximum character
    // so far and accodingly update 'result'
    for (int i = 0; i < 256; i++)
        if (max < input[i]) {
            max = input[i];
            ans = (char)(i + 'a');
        }
 
    // maximum occurring character
    return ans;
}
