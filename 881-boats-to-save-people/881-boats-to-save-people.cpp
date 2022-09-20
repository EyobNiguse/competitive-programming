class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int bots = 0;
        int i,j;
        i = 0;
        j = people.size()-1;
        while(i<=j){
             bots++;
            if(people[i] + people[j] <= limit){
                i++;
            }
            j--;
         }
        return bots;
        
    }
};