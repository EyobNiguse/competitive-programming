class KthLargest {
public:
    
    priority_queue<int>pq; 
    int k  = 0;
    KthLargest(int k, vector<int>& nums) {
      for(auto x:nums){
          pq.push(-x);
      } 
        this->k = k;
        while(pq.size() > k){
            pq.pop();
        }
        
    }
    
    int add(int val) {
        pq.push(-val);
        if(pq.size() > k ){
            cout<<pq.top()<<" ";
            pq.pop();
        }
    
     return  -pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */