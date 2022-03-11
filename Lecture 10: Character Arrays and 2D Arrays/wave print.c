void wavePrint(int **input, int n, int m)
{  
      for(int j=0; j<m; j++) 
      { 
          if(j%2==0) {
              for(int i =0; i<n; i++)
              {
                  cout<<input[i][j]<<" ";
              }
          }
         
          else
          {  int i= n-1;;
              while(i>=0)
              {
                  cout<<input[i][j]<<" ";
                  i--;
              }
          }
              
          
          
          
      }
    
    
}
    //Write your code here
