#include<iostream>
using namespace std;
int main(){
    long n;
    cin >> n;
        long int rem = 0;
        long int ans = 0;
        long int PV = 1;
    while(n != 0){
        

        rem = n % 2;
        ans = ans + rem*PV;
        PV *= 10;
        n /= 2;


    }
    cout << ans ;
    return 0;
    
}
