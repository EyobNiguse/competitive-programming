class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastIndex = nums.size()-1;
        int i = 0;
        int countZ = 0;
        for(int num:nums){
            if(num==0){
                countZ++;
            }
        }
        while(i < nums.size() && countZ > 0){
            cout<<i<<" "<<nums[i]<<" ";   
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                countZ--;
            }else{
            i++;           
            }
}
         
        
    }
};