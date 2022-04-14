class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>map;
        vector<string> sortedStrs = strs;
        vector<vector<string>> output;
        vector<int>addedIndexes(strs.size(),-1);
        for(int i=0; i < strs.size();i++){
           sort(sortedStrs[i].begin(),sortedStrs[i].end());
        }
     
        for(int i=0;i < sortedStrs.size();i++){
            for(int j=i; j < sortedStrs.size();j++){
                if(sortedStrs[i]==sortedStrs[j]){
                    string key = strs[i];
                    sort(key.begin(),key.end());
                      
                    if(! (count(addedIndexes.begin(),addedIndexes.end(),j))){
                        map[key].push_back(strs[j]);
                        addedIndexes.push_back(j);
                    }
                        
                    
                }
            }
        }
        
      for (auto x : map){
      
          output.push_back(x.second);
      }
        return output;
    }
};
