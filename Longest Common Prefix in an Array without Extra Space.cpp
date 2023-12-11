int shortest_string(string s[], int n)
    {
        int minlength = INT_MAX, min_index;
        for (int i = 0; i < n; i++) {
            if (s[i].length() < minlength) {
             minlength = s[i].length();
                min_index = i;
            }
        }
        return min_index;
    }
    
    string longestCommonPrefix (string s[], int n)
    {
        int shortest_string_index = shortest_string(s, n);
        while (s[shortest_string_index].length() > 0){
             
             int count = 0;
             for (int i = 0; i < n; i++){
                if (s[i].find(s[shortest_string_index]) == 0){
                    count++;
                }
            }
            if (count == n){
                return s[shortest_string_index];
                break;
            }
            s[shortest_string_index].pop_back();
        }
        return "-1";
    }