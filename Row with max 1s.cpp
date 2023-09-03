 int binSearch(vector<int>arr, int n, int x){
        int low=0;
        int high= n-1;
        int ans= n;
        while(low<=high){
            
            int mid= (high+low)/2;
            if(arr[mid]>=x){
                ans=mid;
                high= mid-1;
            }
            else low= mid+1;
            
        }
        return ans;
        
    }
	int rowWithMax1s(vector<vector<int> > arr, int r, int c) {
	    // code her
	   
	    int max_count=0;
	    
	    int indx=-1;
	    for(int i=0; i<r; i++){
	        int count1s= c- binSearch(arr[i], c, 1);
	        if(count1s>max_count){
	            max_count= count1s;
	            indx=i;
	            
	        }
	        
	    }
	    return indx;
	    
	}