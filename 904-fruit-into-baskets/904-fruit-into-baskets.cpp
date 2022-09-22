class Solution {
public:
    int totalFruit(vector<int>& fruits) {
            unordered_map<int, int>baskets;
            int l=0;
            int r=0;
            int n =  fruits.size();
            int ans = 0;
            int count=0;
while(r < n){
      baskets[fruits[r]]++;
      count++; 
      while(baskets.size() > 2 && l < n){
          int& val=  baskets[fruits[l]]; 
           val--;
           count--;
         if(val == 0){
            baskets.erase(fruits[l]); 
         }
          l++;
      }
      ans =  max(ans,count);
      r++;
}
    
      return ans;  
    }
};