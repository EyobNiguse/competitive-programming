class MyCircularDeque {
public:
    stack<int>front;
    stack<int>back;
    int leng;
    MyCircularDeque(int k) {
        leng = k;
    }
    
    bool insertFront(int value) {
        // cout<< leng <<" "<< front.size()<<" ";
        if(front.size() + 1 <=  leng){
        front.push(value);
        stack<int>temp = front ;
        stack<int>tempBack;
        while(!temp.empty()){
           tempBack.push(temp.top()); 
           temp.pop();
        }
    
     back= tempBack;
return true;
}
return false;
               }
    
    bool insertLast(int value) {
        
        if(front.size() + 1 <=  leng){     
        back.push(value);
        stack<int>temp = back ;
        stack<int>tempFront;
        while(!temp.empty()){
           tempFront.push(temp.top()); 
           temp.pop();
        }
    
     front = tempFront;
return true;
}
return false;
    }
    
    bool deleteFront() {
    if(!front.empty()){

     front.pop();
     stack<int>tmp = front;
     stack<int>newBack;
      while(!tmp.empty()){
          
         newBack.push(tmp.top());
         tmp.pop();
 
      }
        back = newBack;
        return true;
        }    
        return false;
    }
    
    bool deleteLast() {
   
    if(!back.empty()){       
     back.pop();
    
     stack<int>tmp = back;
     stack<int>newFront;
     while(!tmp.empty()){

           newFront.push(tmp.top());
           tmp.pop();
 
      }
     
  
        front = newFront;
    
      return true;
        }
        return false;
    }
    
    int getFront() {
        if(!front.empty()){
            return front.top();
        }
        return -1;
    }
    
    int getRear() {
        if(!back.empty()){
            return back.top();
        }
        return -1;
    }
    
    bool isEmpty() {
        if(front.empty()){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if(front.size() == leng){
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */