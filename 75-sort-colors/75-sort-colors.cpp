class Solution {
public:
    
    void sortColors(vector<int>& nums) {
        //count how manys 1 and 0's are there 
        vector<int> numbers(3);
        vector<int>output;
        for(int i=0;i<nums.size();i++){
           numbers[nums[i]]+=1;  
        }
        int count=0;
        int currIndex = 0;
        while(count < numbers.size()){
            int amount = numbers[count]; 
        
            while(amount > 0){
                nums[currIndex] = count;
                amount--;
                currIndex++; 
            }
            count++;
        };
 
   
    
    }
};