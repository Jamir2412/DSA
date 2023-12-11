//Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        long long ans=0;
        unordered_map<int, int> freq;
        int p[n];
        p[0]=arr[0];
        
        for(int i=0; i<n; i++)
            p[i]= p[i-1]+ arr[i];
            
            for(int i=0; i<n; i++){
                
                ans+= freq[p[i]];
                if(p[i]==0)
                ans++;
                freq[p[i]]++;
            }
            
        return ans;
    }