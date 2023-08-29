int toyCount(int n, int k, vector<int> arr)
    {
        // code here
        int sum=0;
        sort(arr.begin(), arr.end());
        int i=0;
        while(i<n){
            sum+=arr[i];
            if(sum==k)
                return i+1;
            else if (sum<k)
            i++;
            else{
                
                return i;
            }
        }
        
    }