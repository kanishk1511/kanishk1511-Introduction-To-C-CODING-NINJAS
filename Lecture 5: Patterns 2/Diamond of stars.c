#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    int n1;
    n1 = (n + 1) / 2;
    while ( i <= n1 ) {
        int spaces = 1;
        while ( spaces <= n1 - i){
            cout << ' ';
            spaces++;
        }
        int stars = 1;
        
        while (stars  <= (2*i - 1)){
            cout << "*";
            stars++;
            }
       
        cout << endl;
        i++;
    }
    int n2;
    n2 = n1 - 1;
    i = n2 - 1;
    
    while (i >= 0){
        int spaces = 1;
        while ( spaces <= n2 - i  ){
        cout << ' ';
        spaces++;
        }
        int stars = 1;
        while ( stars <= 2*i + 1){
            cout << "*";
            stars++;

        }
        cout << endl;

    
        i--;
    }
    

    
}




