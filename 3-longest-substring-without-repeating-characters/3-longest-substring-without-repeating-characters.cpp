class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0){
            return 0;
        }
        if(s.length() == 1){
            return 1;
        }
        unordered_map<char , char> um;
        int ans = 0;
        string temp = "";
        
        for(int i = 0; i < s.length() ; i++){
            for(int j = i; j < s.length();j++){
                if(um.find(s[j]) != um.end()){
                    break;
                }
              temp += s[j];
              um[s[j]] = s[j];
             
            }
            int sz = temp.length();
            um.clear();
            temp.erase();
            ans =  max(ans, sz);
            
        }
        return ans;
        
    }
};