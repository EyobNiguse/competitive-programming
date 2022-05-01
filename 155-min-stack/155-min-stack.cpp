class MinStack {
public:
    vector<vector <int>> stck;
     int minIndex=0;
    MinStack() {
        
    }
    
    void push(int val) {
          if(stck.size() == 0){
           stck.push_back({val,val});
        
          }else{ 
         
              int temp =  stck.at(stck.size()-1)[1];
              int minI  =  min(temp, val);
              stck.push_back({val,minI});
              
              
          }
    }
    
    void pop() {
            stck.pop_back();
             
        
    }
    
    int top() {
        return stck.at(stck.size()-1)[0];
    }
    
    int getMin() {
    return stck.at(stck.size()-1)[1];    
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */