#include<iostream>
using namespace std;
int main() {
	// Write your code here
    int x, y;
    cin >> x >> y;
    int i = 0;
    int ans=1;
    while (i<y ){
        ans *= x;
        i++;

    }
    cout<<ans;
}

