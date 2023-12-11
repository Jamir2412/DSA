string LCPin(string str1, string str2){
        
        string res= "";
        int len= min(str1.length(), str2.length());
        if(str1[0]!=str2[0]) return "-1";
        res+= str1[0];
        for(int i=1; i<len; i++){
            if(str1[i]!=str2[i]) break;
            
            res+=str1[i];
            
        }
        return res;
        
    }
    
    string longestCommonPrefix (string arr[], int n)
    {
        
        string prefix= arr[0];
        
        for(int i=1; i<n; i++){
            prefix= LCPin(prefix, arr[i]);
            if(prefix=="-1") return prefix;
        }
        
        return prefix;
        
    }