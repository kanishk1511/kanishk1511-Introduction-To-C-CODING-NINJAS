
#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int pre,cur;
    cin>>pre;
    int i=2;
    bool dec=true;
    while(i<=n)
    {
        cin>>cur;
        if(cur==pre)
        {
            cout<<"false";
            return 0;
        }
        i++;
        if(cur<pre){
        
            if(dec==false)
            {
                cout<<"false";
                return 0;
            }
        }
        else
        {
            if(dec==true)
                dec=false;
        }
        pre=cur;
    }
    cout<<"true";
	// Write your code here
	
}
