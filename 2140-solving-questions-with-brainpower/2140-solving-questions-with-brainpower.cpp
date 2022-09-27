class Solution {
public:
    long long points(vector<vector<int>>& questions,int i,vector<long long>&dp){
    
        if(i >= questions.size()){
     
            return 0;
        }
        if(dp[i] != -1){
            return dp[i];
        }
      
    long long num1 =  questions[i][0] + points(questions, i  + questions[i][1]+1,dp);
    long long num2  = points(questions,i+1,dp); 
    dp[i] = max(num1, num2);
    return dp[i];

    }
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long> dp(questions.size(),-1);
        return points(questions,0,dp);
    }
};