bool search(vector<vector<int> > arr, int r, int c, int x) 
    {
        // code here 
        int i= 0;
        int j= c-1;
        
        while(i<r && j>=0){
            if(arr[i][j]==x)
            return 1;
            else if(x<arr[i][j]) //if x is smaller,
            j--;                // move left
            else i++;       // if x is greater,
        }                   // move down
        return 0;
    }