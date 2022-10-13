class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
     
        vector<int>um(n + 2);        
        vector<int>output;
        for(int i =0;i < bookings.size();i++){
            um[bookings[i][0]] += bookings[i][2];
            um[ bookings[i][1] + 1 ] += -bookings[i][2];
            
        }
        // 1 2 3
        // 1 2 3 4 5
        int sum =0;
        int j = 1;
        for(j=1; j <= n;j++){
             sum+=um[j];
             output.push_back(sum);
        }
        
        return output;
    }
};