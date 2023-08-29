int maxOnes (vector <vector <int>> &arr, int n, int m)
        {
            // your code here
            int count=0, res=0, ans=0;
            int i=0;
            int j= m-1;
            while(i<n && j>=0){
                
                if(arr[i][j]==1){   //no. of 1s in row i.
                    count++;        
                    j--;
                }
                else
                    i++;
                    
                if(count>res){
                   res=count;
                   ans= i;
                }
            }
            return ans;
            
        }