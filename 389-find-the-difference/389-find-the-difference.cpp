class Solution {
public:
    char findTheDifference(string s, string t) {
        int num  =0;
        int num2 = 0;
        for(int i=0; i < s.length(); i++){
            num+= int(s[i]); 
            }

        for(int i=0; i < t.length(); i++){
            num2+= int(t[i]); 
            }
        return char(num2-num);
    }
};