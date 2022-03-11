
using namespace std;
#include <cmath>
#include<iostream>
int main(){
    int n;
    cin >> n;
    int Evensum = 0;
    int Oddsum =0;
    

while(n>0){
    int i = n % 10 ;


    if (i%2 == 0){

    Evensum = Evensum + i; }

else{
    Oddsum = Oddsum + i;
}
   

        
     
     n = n/10;
}
    cout << Evensum << " "<< Oddsum ;

}
