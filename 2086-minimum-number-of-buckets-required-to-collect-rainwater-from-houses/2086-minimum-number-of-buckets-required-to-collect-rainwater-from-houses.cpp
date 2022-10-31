class Solution {
public:
    int minimumBuckets(string street) {
        int numberOfHouses = 0;
        int n= street.length();
        int ans = 0;
        unordered_map<int, int>um;
        for(int i= 0; i < n; i++){
           
            if(street[i]=='H'){
              
                if(i-1 >= 0 && um[i-1] == 0){
                    
                    if(i + 1 < n && street[i+1]=='.'){
                        um[i+1]++;
                        ans++;
                    }else if(street[i-1]=='.'){
                  
                        ans++;
                        
                        um[i-1]++;
                    }else{
                        return -1;
                    }
                }else{
                    if(i-1 < 0){
                        if( i+1 < n && street[i+1] == '.' ){
                        ans++;
                        
                            um[i+1]++;
                        }else{
                            return -1;
                        }
                    }
                }
            }else{
                // cout<<"here2\n";
                continue;
            }
        }
           
for(auto itr = um.begin(); itr!=um.end();itr++){
    cout<<itr->first<<" "<<itr->second<<" \n";
  }
    return ans;
    }
};