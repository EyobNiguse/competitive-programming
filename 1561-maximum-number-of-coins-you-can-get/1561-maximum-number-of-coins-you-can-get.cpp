class Solution {
public:
    int maxCoins(vector<int>& piles) {
    int max=0;
    int count = 1;
    int n = piles.size() / 3 ; 
        //sort
        sort(piles.begin(),piles.end());
        if(piles.size() == 3){
            return piles[1];
        }
        for(int i = piles.size()-2; i >=  piles.size() - (2*n)  ; i-=2){
                
                        max += piles[i];         
                
        }
    return max;
    }
};