int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	int platforms= 1;
    	int temp=1;
    	sort(arr, arr+n);
    	sort(dep, dep+n);
    	int i=1;
    	int j=0;
    	while(i<n){
    	    if(arr[i]>dep[j]){  //if the arrival time of next train is 
    	        temp--;        //greater than departure time of current train
    	        j++;           //than no extra platform needed
    	        
    	    }
    	    else if(arr[i]<=dep[j]){    //if the arrival time of next train is 
    	        temp++;                 //lessar than departure time of current train
    	        i++;                    //than extra platform is needed
    	    }
    	    platforms= max(temp, platforms);    //maximum number of platform is the required answer
    	}
    	return platforms;
    }