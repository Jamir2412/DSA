bool ispar(string x)
    {
        // Your code here
        stack<char>temp;
        for(int i=0; i<x.length(); i++){
            
            if(temp.empty())
                temp.push(x[i]);
            else if((temp.top()=='(' && x[i]==')') || (temp.top()=='{' && x[i]=='}') || (temp.top()=='[' && x[i]==']' )){
                temp.pop();
            }
            else temp.push(x[i]);
        }
        if(temp.empty())
            return true;
        return false;
    }