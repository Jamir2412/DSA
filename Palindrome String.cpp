int isPalindrome(string s)
	{
	    // Your code goes here
	    int i=0 ;
	    while(i<=s.size()/2){
	        if(s[i]!=s[s.size()-1-i])
	            return 0;
	        i++;
	    }
	    return 1;
	}