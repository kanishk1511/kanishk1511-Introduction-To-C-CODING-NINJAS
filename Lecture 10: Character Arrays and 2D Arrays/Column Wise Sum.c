#include<iostream>
using namespace std;


int main(){
    int a[1000][1000];

    int m;
    int n;
    cin >> m >> n ;
    int sum;
    
    for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
   
    for(int j = 0 ; j < n ; j++){
         sum = 0;
         
        for(int i = 0 ; i < m  ; i++ ){
            sum += a[i][j];
            
        }
        cout << sum << ' ' ;
        
    }
    
    
    

    return 0;
}
