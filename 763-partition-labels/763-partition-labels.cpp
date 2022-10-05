class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,vector<int>>um;
        vector<int>output;
        for(int i=0; i < s.length();i++){
            vector<int> temp = {i,1};
            if(um.find(s[i]) == um.end()){
                um[s[i]]=temp;
            }else{
                int num = um[s[i]][0];
                int ad = um[s[i]][1]+1;
             
                um[s[i]] =  {max(num,i),ad};
            
            }
        }
        int l=0;
        int r=0;
        int n= s.length();
        int maxN=0;
      
        while(r<n){
          maxN = um[s[r]][0];
          int count=0;
     
            while(r <  n){
            um[s[r]][1]--;
            if(um[s[r]][0] > maxN ){ 
            if(um[s[maxN]][1]==0){
                maxN =um[s[r]][0];
                um[s[r]][1]++;
                break;
                 }
                 maxN =um[s[r]][0];
                }
             
                count++;
                r++;
            }
 
            output.push_back(count);
            
        }
       return output;
    }
};