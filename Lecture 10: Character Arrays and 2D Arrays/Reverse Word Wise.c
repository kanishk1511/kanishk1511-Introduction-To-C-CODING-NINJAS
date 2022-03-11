#include <string.h>
using namespace std;
int lenght(char str[]){
    int count = 0;
    for(int i = 0 ; str[i] != '\0' ; i++){ 
                count++;
    }
    return count;
}


void reverseStringWordWise(char str[]) 
{
    int l=strlen(str);
    int start = 0,end = 0;//we write end = 0 just to avoid garbage
    
    for(int i=0;i<=l;i++){
        if(str[i]== ' ' || str[i]== '\0'){
            end = i-1;
            for(;start<=end;start++,end--)
            {swap(str[start],str[end]);}
            start = i+1;
        }
    }
    start = 0,end = l-1;
    while(start<=end)
    {
        swap(str[start],str[end]);
        start++,end--;
    }
}
