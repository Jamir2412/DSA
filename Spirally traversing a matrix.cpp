vector<int> spirallyTraverse(vector<vector<int> > arr, int r, int c) 
    {
        // code here 
        vector<int>ans;
        int top=0;
        int right= c-1;
        int bottom= r-1;
        int left= 0;
        
        while(top<=bottom && left<=right){
            
            for(int i=left; i<=right; i++){
                ans.push_back(arr[top][i]);     //top row
            }
            top++;
            for(int i=top; i<=bottom; i++){
                ans.push_back(arr[i][right]);   //right column
            }
            right--;
            if(top<=bottom){
                for(int i= right; i>=left ; i--){
                    ans.push_back(arr[bottom][i]);  //bottom row
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom; i>=top; i--){
                    ans.push_back(arr[i][left]);    //left column
                }
                left++;
            }
            
            
        }
        
        return ans;
    }