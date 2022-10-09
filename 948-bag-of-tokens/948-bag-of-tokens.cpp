class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score =0;
        int temp = power;
        sort(tokens.begin(), tokens.end());
        int r = tokens.size()-1;
        int l= 0;
        int ans =  0;
       while( l <= r){
           if(power >= tokens[l]){
               power-=tokens[l];
               l++;
               score++;
           }else if(score>0){
               power+=tokens[r];
               score--;
               r--;
           }else{
               break;
           }
           ans = max(ans,score);
       }
    return ans;
    }
};