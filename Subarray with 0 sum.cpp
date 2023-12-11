bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int>hash;
        int preSum=0;
        for(int i=0; i<n; i++){
            preSum+= arr[i];
            if(hash.find(preSum)!= hash.end())  return true;
                
            if(preSum==0)   return true;
                
            hash.insert(preSum);
        }
        return false;
    }