class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int start = 0;
        stack<int> stck;
        
        int r = 0;

        for(int i = 0; i < popped.size() ; i++){
            
             
            for(int j = 0; j  < pushed.size() ; j++){
                if(j >= r){
                  stck.push(pushed[i]);                                       
                }
               if(pushed[j] == popped[i]){
                   if(! stck.empty()){
                    stck.pop();
                                               
                   }
                   r = j;
                   pushed.erase(pushed.begin() + j);
                   break;
             }  
           }
            
            cout<< stck.size() <<" "; 
        }
    if(stck.size() != 0 ){
        return false;
    }
     return true;
    }
};