class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int   inc = 0;
    int dec = 0;
    int l=0;
    int n  = nums.size();
    int r = n-2;

   while(r >= 0  ){
      if( nums[r] < nums[r+1]){
          break;
      }
       r--;
    }
        if (r < 0) {
    	    reverse(nums.begin(), nums.end());
    	}else{
        l=n-1;
        while( l > r ){
            if(nums[l] > nums[r]){
                break;
            }
        l--;
       
         }
             swap(nums[r],nums[l]);
             reverse(nums.begin() + r + 1 , nums.end()); 
        }
  
      
        
               
 
    
                          
   
    }
};