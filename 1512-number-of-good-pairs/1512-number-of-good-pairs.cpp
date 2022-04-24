class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int maxI =  0;
        int goodPair = 0;
        for(int i = 0; i < nums.size();i++){
            maxI =  max(maxI,nums[i]);
        }
        vector<int> countSort(maxI+1);
         for(int i = 0; i < nums.size();i++){
            countSort[nums[i]] +=1;
        }
        sort(nums.begin(),nums.end());
        int index = 0;
        while(index <  nums.size()){
            if(countSort[nums[index]] > 1 ){
            goodPair += (countSort[nums[index]] * (countSort[nums[index]]-1) ) / 2; 
 
                index += countSort[nums[index]];
             }else{
                index++;
            }
        }
        return goodPair;
    }
};