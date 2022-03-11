#include<iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int i =1;
    while (i<=n){
        int spaces = 1;
        while(spaces <= n - i){
            cout << ' ';
            spaces++;
        }
        int j = 1;
        int val = i;
        while ( j <= i){
            cout << val;
            j++;
            val++;
        }
        int k = 1;
        j = 2*i - 2;
        while (j>k){
           // cout << i - 1;
            cout<<j;
            k++;
            j--;
        }
        cout<< endl;
        i++;
    }

}
