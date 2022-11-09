class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int , vector<int>>pq;
        for(auto x: stones){
            pq.push(x);
        }
        while(pq.size() > 1){
             int top1 = pq.top();
             
             pq.pop();
             
             int top2 = pq.top();
            
            if( top1 == top2 ){
                pq.pop();
            } else if( top2 != top1){
                top1-=top2;
                pq.pop();
                pq.push(top1);
            }
        }
        
      if(pq.size()==1){

          return pq.top();
      } 
    return 0;
    }
};