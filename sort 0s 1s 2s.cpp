
    void sort012(int a[], int n)
    {
        // code here 
        int l=0, mid=0, h=n-1;
        while(mid<=h){
            if(a[mid]==0){
                swap(a[mid], a[l]);
                l++;
                mid++;
            }
            else if(a[mid]==1) mid++;
            else{
                swap(a[mid], a[h]);
                h--;
            }
            
        }
    }
    
