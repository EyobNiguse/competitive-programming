class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
     vector<vector<int>> holder;
     vector<int> output(temperatures.size());
    vector<vector<int>> stck ; 
        int r = 0;
        int l = 0;
        for(int i=0; i < temperatures.size(); i++){
           holder.push_back({temperatures[i],i}); 
        }
                stck.push_back(holder[0]);

        for(int i=1;i<holder.size();i++){
            while(stck.size() > 0 && holder[i][0] > stck[stck.size()-1][0]){
               output[stck[stck.size()-1][1]] = holder[i][1]  - stck[stck.size()-1][1];  
                stck.pop_back();
            }
            stck.push_back(holder[i]);
            if( stck[stck.size()-1][0] >= holder[i][0]){
                stck.push_back(holder[i]);
            }

            
                    }
        
    return output;
    }
};
