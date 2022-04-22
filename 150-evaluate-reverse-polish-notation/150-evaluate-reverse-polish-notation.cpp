class Solution {
public:
    bool isOperator(string a){
    
        if(a == "+" || a == "-" || a == "/" || a == "*" ){
            return true;
        }else{
            return false;
        }
    }
    int getValue(string a , string b, string opr){
       char operation = opr[0];
        switch(operation){
           case '+':
               return  (stoi(a) + stoi(b));
               break;
           case '-':
               return   (stoi(a) - stoi(b));
               break;
           case '*':
               return  (stoi(a) * stoi(b));
                break;
           case '/':
               return  (stoi(a) / stoi(b));
            break; 
       } 
        return 0;
    }
 
    int evalRPN(vector<string>& tokens) {
        stack<string> stck;
        vector< vector<string>> operations;
       
        for(int i = 0; i < tokens.size() ; i++){
          if(! isOperator(tokens[i])){
              stck.push(tokens[i]);
          }else if(isOperator(tokens[i])){
              
              string secondOperand = stck.top();
              stck.pop();
              string firstOperand = stck.top();
              stck.pop();
              int value =  getValue(firstOperand,secondOperand,tokens[i]);
           
              
              stck.push(to_string(value));
             
             
          }
            
        }          
       
     
        return stoi(stck.top());
    }
                          
};
