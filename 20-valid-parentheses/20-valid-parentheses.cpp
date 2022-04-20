class Solution {
public:
    bool isOpening(char a){
        if(a == '(' || a == '{' || a == '['){
            return true;
        }
        return false;
    }
    char getOpening(char a){
     switch(a){
         case ')':
             return '(';
             break;
         case ']':
             return '[';
             break;
         case '}':
             return '{';
                 break;
          
             
     }   
        return ' ' ;
    }
    bool isValid(string s) {
        stack<char> stck;
        if(s.length() % 2 != 0){
 
            return false;
            
        }
        for(int i=0; i  < s.length();i++ ){
            if(isOpening(s[i])){
                stck.push(s[i]);
            }else{
                   
                 if( !(stck.empty()) &&  stck.top() == getOpening(s[i])){
                  
                     stck.pop();
                 }else{
                        return false;
                 }
                
            }
        }
        if(stck.empty()){
            return true;
        }
        return false;
        
        
        
    }
};