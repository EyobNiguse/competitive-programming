class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string , int>um;
        vector<string>output(k);
        for(auto x:words){
            um[x]++;
        }
      auto comp = [&um](string n1,string n2){
          if(um[n1] > um[n2] == false){
            if(um[n1] == um[n2]){
            
              return  n1 < n2;
            }else{
                return false;
            }
            // return n1.compare(n2);
          }
          return um[n1] > um[n2];
      };
    priority_queue<string, vector<string>, decltype(comp)>pq(comp);
 

    for(auto itr = um.begin(); itr != um.end(); itr++){
         pq.push(itr->first);
        if(pq.size() > k){
            pq.pop();
        }

    }   
    for(int i=k -1; i >=0 ; i--){
        output[i] = pq.top();
        pq.pop();
    }
    return output;
    }
};