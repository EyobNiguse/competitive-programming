 bool containsDuplicate(vector<int>& nums) {
        // sort the array 
        sort(nums.begin(),nums.end());
        for(int i=0; i < nums.size()-1 ;i++ ){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }