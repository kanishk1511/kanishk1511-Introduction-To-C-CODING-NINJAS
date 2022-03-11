#include  <iostream>
using namespace std;
int main(){
    float S;
    float E;
    float W;
    int sum = 0;
    cin >> S >> E >> W;
    while(S <= E){
        
        int k = (5*(S-32))/9;
        cout<<S<<"\t"<<k<<endl;
        S += W;
    }
    
}


