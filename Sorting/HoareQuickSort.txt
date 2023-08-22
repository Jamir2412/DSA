int hpartition(int arr[], int l, int h)
{   
    int i=l-1, j=h+1, pivot= arr[l];
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)return j;
        swap(arr[i], arr[j]);
        
    }
    
    return 0;
}

void qSort(int arr[],int l,int h){
    if(l<h){
        int p= hpartition(arr, l, h);
        qSort(arr, l, p);
        qSort(arr, p+1, h);
        
    }
}