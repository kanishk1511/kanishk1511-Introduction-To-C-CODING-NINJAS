#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double  basicsalary;
    cin >> basicsalary;
    double hra = 0.2 * basicsalary;
    double da = 0.5 * basicsalary;
    double pf = 0.11 * basicsalary;
    char grade;
    cin>>grade;
    int allow;
    
    if(grade == 'A'){
        allow = 1700;
    }
    else if(grade == 'B'){
        allow = 1500;
    }
    
    else {
        allow = 1300;
    }
    double totalsalary;
    totalsalary = basicsalary + hra + da + allow - pf;
    int n = round(totalsalary);
    cout<<n;


}
