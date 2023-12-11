vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        if(s==0)
        return {-1};
        int start=0,end=0;
        long long currentSum=arr[0];
        while(end<n){
           if(currentSum<s){
               end++;
               currentSum+=arr[end];
           }
           else if(currentSum==s){
               return {start+1,end+1}; 
           }
           else if(currentSum>s){
               currentSum-=arr[start];
               start++;
           }
       }
       return {-1};
    }