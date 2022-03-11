#include<iostream>
using namespace std;
int main(){
    char c;
    c = cin.get();
    int count = 0;
    int spaces = 0;
    int digits = 0;
    while(c != '$'){
        
        
        if(c == ' ' ||  c == '\t' || c == '\n' ){
            spaces++;
        }
        if (c >= 'a' && c <= 'z'){
            count++;
        }
        if (c >= '0' && c <= '9'){
            digits++;
        }
        c = cin.get();

    }
    cout << count << ' ' << digits << ' ' << spaces ;
}
