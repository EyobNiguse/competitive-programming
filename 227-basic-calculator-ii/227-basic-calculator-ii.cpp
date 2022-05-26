class Solution {
public:
    bool operatorCheck(char a){
        if(a=='+'|| a== '-'|| a=='*' || a=='/'){
            return true;
        }
        return false;
    }
    int calculate(string s) {
        vector<int>cp;
        vector<char>opr;
        int output=0;
        string spaceFree="";
    
            for(int i=0; i< s.length();i++){
                    if(s[i] != ' '){
                        spaceFree+=s[i];
                    } 
            }
        int count = 0;
        string A = "";
        char preOper='^';
        for(int i=0; i < spaceFree.length();i++){
            if(!operatorCheck(spaceFree[i])){
                A += spaceFree[i];

            }else{
            
                if(preOper == '+'){
                   int temp  = stoi(A);
                   cp.push_back(temp);
    
               }else if(preOper== '-'){
                        string vl = "-"+A;
                        int temp = stoi(vl);
                        cp.push_back(temp);
                      
                   
               }else if(preOper == '*'){
                        int answer = cp[cp.size()-1] * stoi(A);
                        cp.pop_back();
                        cp.push_back(answer);
               }else if(preOper == '/'){
                        int answer =   (int) cp[cp.size()-1] / stoi(A);
                        cp.pop_back();
                        cp.push_back(answer);
               }else{
            
                int temp = stoi(A);
                cp.push_back(temp);
               }
                 A="";
                 preOper = spaceFree[i];
            }
          
    
          if(i == spaceFree.length() -1 ){

              if(preOper == '+'){
                   int temp  = stoi(A);
                   cp.push_back(temp);
    
               }else if(preOper== '-'){
                        string vl = "-"+A;
                        int temp = stoi(vl);
                        cp.push_back(temp);
               }else if(preOper == '*'){
                        int answer = cp[cp.size()-1] * stoi(A);
                        cp.pop_back();
                        cp.push_back(answer);
               }else if(preOper == '/'){
                        int answer =   (int) cp[cp.size()-1] / stoi(A);
                        cp.pop_back();
                        cp.push_back(answer);
               }else{
                preOper = spaceFree[i];
                int temp = stoi(A);
                  cout<< temp <<" ";
                cp.push_back(temp);
               }
                A ="";
          }
            
        }
        
       for(int i=0; i< cp.size();i++){
           output+=cp[i];
       }
        return output;
    }
};