class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int , int>um;
    vector<int>output;
        for(auto x : nums){
          um[x]++;
        
     }
     int count = k ;
        auto comp = [&um](int n1, int n2){
            return um[n1] > um[n2];
        };
    priority_queue<int, vector<int>, decltype(comp)>pq(comp);
       for(auto i = um.begin();i!= um.end();i++){
           pq.push(i->first);
            if(pq.size() > k ){
                pq.pop();
            }    
       }
    for(int  i = k-1; i >=0 ; i--){
        output.push_back(pq.top());
        pq.pop();
    }
    return output;
    
    }
 
   
};