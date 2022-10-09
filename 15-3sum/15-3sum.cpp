class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;
   
        sort(nums.begin(), nums.end());
        int n = nums.size();
          if (n < 3) {
            return output;
        }
 
     
       
        for(int l = 0 ; l < n -2; l++){
            if(nums[l] > 0){
                break;
            }
            if(l > 0 && nums[l-1] == nums[l]){ 
                continue;
            }
            
           int Tl  = l + 1;
           int r = n - 1;
            while(Tl < r){
               int  sum =  nums[l] + nums[Tl] + nums[r]; 
                if(  sum < 0 ){
                    Tl++;
                }else if(sum  > 0){
                    r--;
                }else{
                    output.push_back({nums[l], nums[Tl], nums[r]});
                     while(Tl < r && nums[Tl]==nums[Tl+1]){
                       Tl++;
                     }
                    Tl++;
                    
                    while(Tl< r  &&  nums[r-1]== nums[r] ){
                        r--;
                    }
                    r--;
                }
               
            }

        }
        
       
    return output;
    }
};