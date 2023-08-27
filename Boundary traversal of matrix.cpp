vector<int> boundaryTraversal(vector<vector<int> > arr, int n, int m) 
    {
        // code here
        vector<int> ans;
        if(n==1){
            for(int j=0; j<m; j++){
                ans.push_back(arr[0][j]);
            }
        }
        else if(m==1){
            for(int i=0; i<n; i++){
                ans.push_back(arr[i][0]);
            }
        }
        else{
            for(int j=0; j<m; j++)
                ans.push_back(arr[0][j]);
            for(int i=1; i<n; i++){
                ans.push_back(arr[i][m-1]);
            }
            for(int j= m-2; j>=0; j--){
                ans.push_back(arr[n-1][j]);
            }
            for(int i= n-2; i>=1; i--){
                ans.push_back(arr[i][0]);
            }
        }
        return ans;
    }