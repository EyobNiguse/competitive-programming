class Solution {
public:
    int compress(vector<char>& chars) {
        int slow=0;
        int fast= 1;
        string s="";
         if(chars.size() == 1){
             return 1;
         }
        while(fast < chars.size()){
            int count=1; 
            fast =  slow + 1;
            while( fast<chars.size() && chars[slow] == chars[fast]){
                count++;
                fast++;
            }
            if(count>1){
                string countVal = to_string(count);
                s+=chars[slow] + countVal;
            }else{
                s +=chars[slow]; 
            }
            slow=fast;
        }
        chars.clear();
        for(int i=0; i < s.length();i++){
            chars.push_back(s[i]);
        }
        return chars.size();
    }
};