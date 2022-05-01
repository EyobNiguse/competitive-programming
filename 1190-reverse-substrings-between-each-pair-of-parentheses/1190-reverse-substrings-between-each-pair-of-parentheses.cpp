class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> stck;
        for(int i=0; i < s.length();i++){
            if(s[i] == '('){
                stck.push(i);
            }else if(s[i] == ')'){
              reverse(s.begin() + stck.top() ,s.begin()+i);
              stck.pop();
            }
        }
        string output="";
      for(int i=0; i<s.length();i++){
         if(s[i]!= '(' && s[i]!= ')' ){
             output+=s[i];
         } 
      }   
      return output;
        
    }
};