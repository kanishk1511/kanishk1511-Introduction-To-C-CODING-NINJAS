#include<iostream>
using namespace std;
int main(){
    int n;
    int c;
    cin >> n ; 
    cin >> c ;

     if(c == 1){
				//operation 
                int sum = 0, num = 1;
                while(num <= n) {
                    sum += num;
                    num++;
                }
                cout << sum;

            }
          else if(c == 2) 
           {
               int product = 1, num = 1;
               while(num <= n)
               {
                   product *= num; 
                   num++;
               }
               cout << product;
           }
            else{
                cout << "-1" ;
                 
            }
           
}
