class MyQueue {
public:
    stack<int>back;
    stack<int>front;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        back.push(x);
        stack<int>temp = back ;
        stack<int>tempFront;
        while(!temp.empty()){
           tempFront.push(temp.top()); 
           temp.pop();
        }
    
     front= tempFront;
 
    }
    
    int pop() {
     int temp =  front.top();
       
     stack<int>tmp = back;
     stack<int>newBack;
     stack<int>popED;
    front.pop();
      while(!tmp.empty()){
          if( tmp.size() == 1){
              
          }else{
             newBack.push(tmp.top());
           }
           tmp.pop();
 
      }
        while(!newBack.empty()){
            
            popED.push(newBack.top());
 
            newBack.pop();
        }
  
        back = popED;
    
    return temp;
    
    }
    
    int peek() {
     return front.top();        
    }
    
    bool empty() {
    if(back.empty()){
        return true;
    }
    
        return false;
    
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */