class Solution {
public:
    // int winner()
    int findTheWinner(int n, int k) {
        vector<int>  players;
     
        for(int i=1; i <= n;i++){
            players.push_back(i);
 
        }
        int i = 0;
        while(players.size() > 1){
            i += (k - 1);
                     
             // 1 2 3 4 6 
            if(i >= players.size()){
               
                      
               
                while(i >= players.size()){
                   i  = i - players.size() ;
                  
                  
                }
            }
            
            cout<<i<<" ";
            
            if(i !=  players.size()){
            players.erase(players.begin() + i);
                    
            }
       
              
            
        }      
      // 1 2  
   
    return players[0];
    }
    
};
 
