class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' ||c == '2'||c == 'e'||c == 'i'||c == 'o'||c == 'u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
       
        int ans = 0;
        int x = 0;
        for(int i=0; i < s.size();i++){
            
            if(i<k){
               if(isVowel(s[i])){
                  x++; 
               }
           }else{
               if(isVowel(s[i])){
                   x++;
               }
                if(isVowel(s[i-k])){
                    x--;
                }
           }
            ans = max(ans,x);
        }
 return ans;
     
    }
};