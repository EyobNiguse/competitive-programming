class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     // using hint 2 
      
        int even = 0;
        int odd = 1;
        int oddIndex = 1;
        int evenIndex = 1;
        float median;       
        vector<int> cpNums = nums;
        // sort and find the median
        sort(cpNums.begin(),cpNums.end());
        int n = nums.size();
        vector<int> output(n);
        // even sequence  2(i) 
        // odd sequence 2(i) + 1 
        vector<int> oddEven(n);        
        if( n % 2 != 0){
            median = cpNums[n/2];
         
        }else{
            median = (cpNums[(n-1)/2] + cpNums[(n+1)/2])/2.0;
          
        } 
       // cout <<median<<" ";
       for(int i=0; i < nums.size();i++){ 
           if(nums[i] < median){
              if(odd >= nums.size()-1){
                  odd = n-1;
              }  
            output[odd] = nums[i];    
            oddIndex++;   
            odd = 2 * (oddIndex) - 1;
           }else if(nums[i] >= median){
              if(even >= nums.size()-1){
                  even = n-1;
              }  
             
              output[even] = nums[i];               
              

               even  = 2*(evenIndex); 
              evenIndex++;
           }
            
           }
       
        return output;
    }
};