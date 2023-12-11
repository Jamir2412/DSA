string reverseWords(string s) 
    { 
        string ans="";
        int count=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='.'){
                ans+=(s.substr(i+1,count)+'.');
                count=0;
            }
            else count++;
        }
        
        ans+=s.substr(0,count);
        return ans;
        
        
        
    } 