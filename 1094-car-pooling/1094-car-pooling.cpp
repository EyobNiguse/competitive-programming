class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
     int filled = 0;
      vector<pair<int,int>>temp;
        for(int i=0; i <trips.size();i++){
            temp.push_back({trips[i][1],trips[i][0]});
            temp.push_back({trips[i][2],-trips[i][0]});
            
        }
 
    sort(temp.begin(), temp.end());
    
    for(int i=0; i<temp.size();i++){
       filled+=temp[i].second;  
    if(filled>capacity){
        return false;
    } 
    }    
      
    return true;
    }
};