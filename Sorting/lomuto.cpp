int lpartition(int arr[], int l, int h){
    int i= l-1;
    int pivot= arr[h];
    for(int j=0; j<h; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return (i+1);
}