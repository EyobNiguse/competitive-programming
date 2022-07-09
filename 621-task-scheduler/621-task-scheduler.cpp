class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
      unordered_map<char,int> um;
        int maxNum=0;
      for(int i=0; i < tasks.size();i++){
          um[tasks[i]]++;
          maxNum = max(maxNum, um[tasks[i]]);
      }
       int ans = (maxNum - 1) * (n+1);
       for(auto it: um){
           // cout<<it.second<<" ";
          if(it.second==maxNum){
               ans++;
           }
       } 
       ans = max(ans , (int)tasks.size());
     return ans;
    }
};