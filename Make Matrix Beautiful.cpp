int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int total=0;
        int max_sum=0;
        for(int i=0; i<n; i++){
            int row=0;
            int col=0;
            for(int j=0; j<n; j++){
                row+= matrix[i][j];
                col+= matrix[j][i];
                total+= matrix[i][j];
            }
            max_sum= max(max_sum, max(row, col));
            
        }
        return (n*max_sum-total);
        
    } 