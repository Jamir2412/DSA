long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
        
        sort(a, a + n); 
        sort(b, b + n);
        long long int sum=0;
        for (int i = 0; i < n; i++)     
            sum += (a[i] * b[n - i - 1]); // multiply largest number of arr A
                                            // with smallest number of arr B and adding to the sum
  
        return sum; 
    }