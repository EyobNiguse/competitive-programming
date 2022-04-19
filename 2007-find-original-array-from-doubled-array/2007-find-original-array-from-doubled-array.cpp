class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        // vector<int> doubled;
        // vector<int> nonDoubled;
        vector<int> output;
        sort(changed.begin(), changed.end());
        if( changed.size() % 2 != 0 ){
          return {};  
        }
        int pointer1 = 0;
        int pointer2= 0;
        int count = 0;
        
        // how many 0's are there 
           while(count <= changed.size() - 1 && changed[count] < 1 ){
              count++;
              
           }
        cout << count << " ";
           if(count % 2 == 0 && count > 0){
                int amount =  count / 2; 
                while(amount > 0){
                    
                    cout << "here ";
                    output.push_back(0);
                    amount--;
                
                }
           }
           while(pointer1 < changed.size()){  
                if(changed[pointer1] == -1){
                    pointer1++;
                    continue;                      
                }
            if(changed[pointer1] != 0){ 
            while( 2 * changed[pointer1]  != changed[pointer2] && pointer2 < changed.size()-1){  
                
    
            
                pointer2++;
            
            }
            if( 2 * changed[pointer1] == changed[pointer2]){
               changed[pointer2] = -1;
               output.push_back(changed[pointer1]);
            }    
            pointer1++;
               }else {
                  
                   pointer1++;
               
               }
           
          
           }
            for(int i = 0; i < changed.size(); i++){
                 
            }
            if(output.size() ==(changed.size() / 2))
                return output;
        
            return {};
                
        
    }
};