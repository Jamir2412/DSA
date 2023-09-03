bool find3Numbers(int arr[], int n, int x)
    {
        //Your Code Here
        sort(arr, arr+n);
        for(int i=0; i<n-2; i++){
            int j= i+1;
            int k= n-1;
            while(j<k){
                
                if(arr[i]+arr[j]+arr[k]== x) return 1;
                
                else if(arr[i]+arr[j]+arr[k]< x) j++;
                
                else k--;
            }
        }
        return 0;