void rotateby90(vector<vector<int> >& arr, int n) 
    { 
        for(int i=0; i<n; i++){
            for(int j= i+1; j<n; j++){
                swap(arr[i][j], arr[j][i]);     //transpose
            }
        }
        
        for(int i=0; i<n/2; i++){
            for(int j=0; j<n; j++){
                swap(arr[i][j], arr[n-1-i][j]);     //reversing row
            }
            
        }
        // code here 
    } 