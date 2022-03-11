bool checkMember(int n){
    int a = 0;
    int b = 1;
    if ( n == 0 || n == 1){
        return true;
        
   }
    int c=1;
    while(c<=n){
       c = a + b;
       a = b;
       b = c;
    if(c==n){
       return true;
      }
    }
return false ;

}
