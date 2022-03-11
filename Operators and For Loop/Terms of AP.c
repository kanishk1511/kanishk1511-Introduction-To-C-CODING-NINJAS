#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int i = 1;//3i+2
    int count = 0;

    while(count != x){
        
            int n;
            n = 3*i + 2;
            if(n % 4 != 0){
                cout << n << ' ';
                count++;

            }

        
        i++;
      
        
        

        
    }


}
