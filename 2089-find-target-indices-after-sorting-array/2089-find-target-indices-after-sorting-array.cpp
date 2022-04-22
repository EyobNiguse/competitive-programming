class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        //get the max
        int maxI =0;
        int indexOfTarget = 0;
        vector<int> output;
        bool inArray =  false;
        for(int i=0; i< nums.size() ;i++){
            maxI =  max(nums[i],maxI);
              if(nums[i] < target){
                  indexOfTarget++;
              }
            if(nums[i] == target){
                inArray = true;
            }
        }
         if(!inArray){
            return {};
        }
        vector<int> countInt(maxI+1);
        for(int i=0; i< nums.size();i++){
            countInt[nums[i]] +=1;
            
        }
        if(countInt[target] > 1){
            int amount = 0;
            while(amount < countInt[target]){
                output.push_back(indexOfTarget + amount);
                amount++;
            }
        }
        else{
            output.push_back(indexOfTarget);
        }
        // find the index 
        return output;
    }
};