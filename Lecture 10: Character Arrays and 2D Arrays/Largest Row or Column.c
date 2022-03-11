#include<climits>
void findLargest(int **input, int n, int m)
{
    
   //row sum
    char c='r';
    int osum=INT_MIN;
    int index=0;
    
    
    for(int i = 0 ; i < n ; i++)
    {
        int csumr = 0;
        for(int j = 0 ; j < m ; j++)
        {
            csumr += input[i][j];
        }
        
        if(csumr>osum)
        {
            osum=csumr;
            index=i;
        }
    }
    
    
    for(int j = 0 ; j < m ; j++ )
    {
        int csumj = 0;
        for(int i = 0 ; i < n ; i++)
        {
            csumj += input[i][j];
        }
        
        if(osum<csumj)
        {
            osum=csumj;
            if(c=='r')
                c='c';
            index=j;
        }
    }
    
    
    if(c=='r')
        cout<<"row"<<" "<<index<<" "<<osum<<endl;
    else
        cout<<"column"<<" "<<index<<" "<<osum<<endl;
        

}
