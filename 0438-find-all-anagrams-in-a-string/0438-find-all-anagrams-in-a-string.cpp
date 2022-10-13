class Solution {
public:
    vector<int> findAnagrams(string s, string p){
        int r=0;
        unordered_map<char, int>um1;
        unordered_map<char, int>um2;
        vector<int>output;
        int n = p.length();
        for(int i=0; i <  n ; i++){
            um1[p[i]]++;
            um2[s[i]]++;
        }
        if(isAnagram(um1,um2)){
            output.push_back(0);
        }
        int l=0;
        for(int i=n ; i < s.length() ; i++){
           um2[s[i]]++;
           um2[s[l]]--;
               if(um2[s[l]] == 0){
                   um2.erase(s[l]);
               }
            l++;
            if(isAnagram(um1,um2)){
                output.push_back(l);
            }
            }
                      return output;    
}
bool isAnagram(unordered_map<char,int>um1,unordered_map<char,int>um2 ){
        auto it = um1.begin();
        if(um1.size() == um2.size()){
        while(it !=um1.end()){
            if(um2.find(it->first) == um2.end() ||   it->second != um2[it->first]){
                return false;
            }
        it++;
        }
                        
        }else{
            return false;
        }
        return true;
    };
                      
};