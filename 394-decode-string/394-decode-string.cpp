class Solution {
public:
    string temp;
    stack<char> stck;
    bool isNumber(char c){
        if(c == '0' || c == '1' || c == '2'|| c == '3'|| c == '4'|| c == '5'|| c == '6'|| c == '7'|| c == '8' || c == '9'){
            return true;
        }
        return false;
    }
    string repeat(int amount, string s){
        string tmp = "";
     
       for(int i=0; i < amount ; i++){
           tmp+=s;
       
       } 
       
    return tmp;
    }
    
    string decodeString(string s) {
         temp = s;
         int numb;
         string te="";
         string ns = "";
         int direct = 0;
         bool beforeNumber = true;
         string strBefore = "";
         bool openbr = false;

        for(auto x: s){
           
            if(isNumber(x) && !openbr){
                 beforeNumber=false;
                 te+=x;
             }else if( x == '['){
                 if(!stck.empty()  && stck.top()  == '['){
                 ns += x;
                                         
                 }
                 openbr = true;
                 stck.push(x);
              
             }else if(x == ']'){
                 if(stck.size() > 1 ){
                 stck.pop();
                  ns+=x;                     
                 }else{
                     stck.pop();
                     break;
                 }
                 
             }else if(beforeNumber){
                   strBefore+=x;
             }else{
                 ns+=x;
             }
            
           
  
             direct++;
            
         }
           if(openbr==false){
             
            return temp;
        }
        
        if(te.length() > 1 ){
          numb = stoi(te);
                
        }else{
          char a = te[0];
          numb = a-48;
 
        }
  
        string tempStr = repeat(numb , ns);
    return decodeString (strBefore + tempStr +""+   decodeString(temp.substr(direct+1)));

      
    }
};