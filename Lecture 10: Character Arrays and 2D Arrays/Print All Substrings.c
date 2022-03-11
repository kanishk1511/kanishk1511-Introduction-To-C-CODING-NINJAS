void printSubstrings(char str[]) {
    int len=strlen(str);
    
  
    int j=len-1;
    int i = 0;
    
    
    while(i<=j){
        for(int k=0;str[k]!='\0';k++){
            
            for(int w=i ; w<=k ; w++){
                
            cout<<str[w];
            }
            cout<<endl;
        }
        //  i=k;
        // i=w;
        i++;
    }        
}
