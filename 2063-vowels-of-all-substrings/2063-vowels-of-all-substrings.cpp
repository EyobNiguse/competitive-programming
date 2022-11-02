class Solution {
public:
    bool isVowel(char c){
        //hello
        if(c == 'a' || c == 'e' ||c == 'i' ||c == 'o' ||c == 'u'     ){
            return true;
        }
        return false;
    };
    long long countVowels(string word) {
        long  ans = 0;
        long n = word.length();
        for(int i=0; i  < n;i++){
            if(isVowel(word[i])){
                ans+= (i  + 1 ) * (n - i);
            }
        }

         
return ans;    
}
};