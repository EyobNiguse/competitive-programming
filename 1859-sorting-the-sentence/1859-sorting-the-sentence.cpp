class Solution {
public:
    string sortSentence(string s) {
     //collect the indexes 
    // know the lendth of words 
    
    vector<string> str(10);
        string temp ="";
        string output ="";
        int len = 0;
        for(int i=0; i <= s.length();i++){
        temp += s[i];
            if(int(s[i])==32){
                int num;
                string tmp_string;
                tmp_string.push_back(s[i-1]);
                num = stoi(tmp_string);
                temp.erase(temp.length()-2,2);  
                str[num] = temp;
                cout<<temp<<" ";
                len++;
                temp = "";
            }

        }
        //if length is  1
        if(len == 0){
            temp = s;
            temp.erase(temp.length()-1,1);
            return temp;
            
        }
        //last Word 
        int numb = getNum(s[s.length()-1]);
        string temp2 = "";
        int count = 0;
        while(int(s[s.length()-count]) != 32){
      
            count++;
        }
  
       int start = s.length() - count;
   
       for(int j = start+1 ; j < (start+count) - 1; j++){
           temp2 += s[j];  
        }
        
       str[numb] = temp2 ;
           
       for(int i=1;i<=len+1;i++ ){
         
           output+=str[i];
           output += " ";
              
       }
            
    output.erase(output.length()-1,1);             
    return output;
    }
    int getNum(char s){
        int num;
        switch(s){
                    case '1':
                        num = 1;
                        break;
                    case '2':
                        num = 2;
                        break;
                    case '3':
                        num = 3; 
                        break;
                    case '4':
                        num = 4;
                        break;
                         case '5':
                        num = 5;
                        break;
                         case '6':
                        num = 6;
                        break; case '7':
                        num = 7;
                        break; case '8':
                        num = 8;
                        break;
                         case '9':
                        num = 9;
                        break;                        
                }
        return num;
           
    }
};