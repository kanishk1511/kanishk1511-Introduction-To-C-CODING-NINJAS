#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int PV = 1;
    int ans = 0;
    while (n != 0){
       
        int rem;
        rem = n % 10;

        ans += rem * PV ;
        PV *= 2;
        n /= 10;
        
        
    }
    cout << ans;

}
