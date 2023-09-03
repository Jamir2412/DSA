void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int r=matrix.size();
        int c=matrix[0].size();
        int col0=0;
        
        for(int i=0;i<r;i++)
        {
            if(matrix[i][0]==1) col0=1;
            for(int j=1;j<c;j++)
            if(matrix[i][j]==1)
            {
                matrix[i][0]=matrix[0][j]=1;
            }
        }
        
        for(int i=r-1;i>=0;i--)
        {
            for(int j=c-1;j>=1;j--)
            if(matrix[i][0]==1 || matrix[0][j]==1)
            matrix[i][j]=1;
            
            if(col0==1)
            matrix[i][0]=1;
        }
    }