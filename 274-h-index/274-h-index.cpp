class Solution {
public:
    int hIndex(vector<int>& citations) {
      sort(citations.begin(), citations.end());
        int i;
 
        for(i=1; i <=citations.size();i++){
            if(citations[citations.size()-i] < i){
                break;
            }
        }
        return i-1;
        
     
        
    
    
    }
};