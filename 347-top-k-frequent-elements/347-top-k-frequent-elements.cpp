class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int maxI =  *max_element(nums.begin(), nums.end());
        unordered_map<int, int> umap;
        vector<vector<int>> maxHolder;
        vector<int> output;
        int numberOfUnique = 0;
            for(int i=0; i < nums.size();i++){
                    if(umap.find(nums[i]) == umap.end()){
                        umap[nums[i]] = 1;
                    }else{
                        umap[nums[i]] +=1;
                    }
                    
        }
        unordered_map<int, int>:: iterator itr;
   
    for (itr = umap.begin(); itr != umap.end(); itr++)
    {

          maxHolder.push_back({ itr->first, itr->second}); 
   
    }
    sort(maxHolder.begin(), maxHolder.end(),[&](vector<int>&A, vector<int>&B){
            if(B[1] < A[1]){
                return true;
            }
            return false;
            
        });
    
        for(int  i=0;i < k; i++){
            output.push_back(maxHolder[i][0]);
        }

        return output;
        
    }
};