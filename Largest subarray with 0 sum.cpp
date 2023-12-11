int maxLen(vector<int>&arr, int n)
    {   
        // Your code here
        int sum = 0; 
        int max_len = 0; 
        
        unordered_map<int, int> presum;
    
        for (int i = 0; i < n; i++) {
 
        
        sum += arr[i];
        if (sum == 0)
            max_len = i + 1;
 
        
        if (presum.find(sum) != presum.end()) {
 
            max_len = max(max_len, i - presum[sum]);
        }
        else {
            
            presum[sum] = i;
        }
    }
 
    return max_len;
    }