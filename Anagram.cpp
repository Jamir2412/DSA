bool isAnagram(string a, string b){
        
        // Your code here
        if(a.size()!=b.size()) return false;
        
        unordered_map<char, int> map;
        
        for(int i=0; i<a.size(); i++)
            map[a[i]]++;
        for(int j=0; j<b.size(); j++){
            if(map.find(b[j])!=map.end()) 
                map[b[j]]--;
            else return false;
        }
        
        for(auto i=map.begin(); i!=map.end(); i++){
            if(i->second != 0) return false;
        }
        return true;
    }