long long findMinDiff(vector<long long> a, long long n, long long m){
    //code 
        long long res=LLONG_MAX;
        sort(a.begin(), a.end());
        for(int i=0; i<=n-m; i++)
            res= min(a[i+m-1]-a[i], res);
        return res;
    
    } 