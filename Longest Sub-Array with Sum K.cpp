int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        // Complete the function
        
        unordered_map<int, int> um;
        int sum = 0, maxLen = 0;
 

        for (int i = 0; i < n; i++) {
 

            sum += arr[i];
 
 
            if (sum == k)
                maxLen = i + 1;

            if (um.find(sum) == um.end())
                um[sum] = i;

            if (um.find(sum - k) != um.end()) {

            if (maxLen < (i - um[sum - k]))
                maxLen = i - um[sum - k];
            }
        }
 
    // required maximum length
        return maxLen;