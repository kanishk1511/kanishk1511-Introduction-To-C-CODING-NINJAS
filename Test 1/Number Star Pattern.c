#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int numStars = 0;
    int row = 1;
    while ( row <= n){
        int value = 1;
        while (value <= n - row + 1){
            cout << value;
            value++;
        }
        int stars = 1;
        while (stars <= numStars){
            cout << "*";
            stars = stars + 1;
        }
        value = n - row + 1;
        while(value >= 1){
            cout << value;
            value = value - 1;
        }
        cout << endl;
        row++;
        numStars = numStars + 2;
    }
}
