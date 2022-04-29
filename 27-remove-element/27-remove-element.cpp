class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // sort the array  
        sort(nums.begin(),nums.end());
        int number = 0;
        int initialIndex=0;
        int lastRemoved=0;
        if(nums.size()==0){
            return 0;
        }
        int  n = nums.size();
        int i = 0;
        while(i < nums.size() ){
            if(nums[i] == val){
                auto position = nums.begin() + i; 
                nums.erase(position);
                if(i-1 < 0 ){
                    i = 0;
                }else{
                i--;
                    
                }
                number++;
                
            }else{
                i++;
            }
          
        }
        if(number == 0){
            return nums.size();
        }
 

    return  nums.size();
    }
};