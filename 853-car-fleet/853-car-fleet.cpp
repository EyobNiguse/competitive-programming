class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        if(position.size() == 1 ){
            return 1;
        }
        vector<vector<int>> hash;
        vector<float> compare;
        vector<float> Counter;

        for(int i=0; i < position.size();i++){
            hash.push_back({position[i],speed[i]});
        }
        sort(hash.begin(),hash.end(), [&](vector<int>& A, vector<int>& B){
           
            if(A[0] > B[0]){
                return true;
            }else{
                return false;
            }
            
        });
  
       for(int i=0; i < position.size();i++){
          float temp = (target - hash[i][0]) / static_cast<float>(hash[i][1]);
          compare.push_back(temp);
          cout<<temp<<" ";
           
          
       }
        
        
        for(int i=0; i < compare.size();i++){
       
                if(Counter.size()==0){
                    Counter.push_back(compare[i]);                           
                    // continue;
                }else if(compare[i] > Counter[Counter.size()-1]  ){
            
                        Counter.push_back(compare[i]);
                    
                }
           
           
            
        }
  
        for(int i=0;i<Counter.size();i++){
            // cout<< Counter[i] <<" ";
        }
   
        return Counter.size();
    }
};