class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
    int sze = 0;
    long long maxN = 0;
    int amount = 0;        
        for(int i=0; i< chalk.size();i++){
            maxN += chalk[i];
        }
 sze  = floor(k/maxN);
 amount = k - ( sze * maxN);
   for(int i=0; i < chalk.size();i++){
     amount -= chalk[i];

      if(amount < 0 ){
         return i;
     }else if(amount == 0){
          return i+1;
      }    
     
   }
    
return 0;
}
};