bool isRotated(string str1, string str2)
    {
        // Your code here
        int n1= str1.length();
        int n2= str2.length();
        if(str1[0]==str2[n2-2] || str1[n1-2]==str2[0]){
            if(str1[1]==str2[n2-1] || str1[n1-1]==str2[1]){
                if(str1.substr(0, n1-2)==str2.substr(2, n2-2)|| str1.substr(2, n1-2)== str2.substr(0, n2-2))
                    return true;
                
            }
        }
        return false;
    }