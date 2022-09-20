class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()== 1){
            return;
        }
        if(k > nums.size()){
            for(int i=0;i < k;i++){
               int number = nums[nums.size()-1];
                nums.pop_back();
                nums.insert(nums.begin(),number);
            }
            
        }else if(k==nums.size()){
            
        }else{
        int from= nums.size() - k ;
        vector<int>left(nums.begin(), nums.begin()+from);
        vector<int>right(nums.begin()+from,nums.end());
        nums  = left;
        nums.insert(nums.begin(),right.begin(),right.end());
        }
      
    }
};