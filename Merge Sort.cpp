void merge(int arr[], int low, int mid, int high)
    {
         // Your code here
         int left= low;
         int right= mid+1;
         int temp[high+low+1];
         int i=0;
         while(left<=mid && right<=high){
             
             if(arr[left]<= arr[right]){
                 temp[i]=arr[left];
                 left++;
                 i++;
             }
             else{
                 temp[i]= arr[right];
                 right++;
                 i++;
             }
             
         }
         while(left<=mid){
             temp[i]=arr[left];
             i++;
             left++;
         }
         while(right<=high){
             temp[i]= arr[right];
             right++;
             i++;
         }
         for(int j=low; j<=high; j++) 
            arr[j]= temp[j-low];
             
         
    }
    
    void mergeSort(int arr[], int low, int high)
    {
        //code here
        if(low >= high) return;
        
        int mid= (low+high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }