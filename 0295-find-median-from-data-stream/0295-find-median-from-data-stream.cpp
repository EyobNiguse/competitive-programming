class MedianFinder {
public:
    priority_queue<int>min_heap,max_heap;
    MedianFinder() {
        
    }
    void addNum(int num) {
     min_heap.push(-num);
     max_heap.push(-min_heap.top());
     min_heap.pop();
     if(max_heap.size()>min_heap.size()){
         min_heap.push(-max_heap.top());
         max_heap.pop();
     }   
    }
    
    double findMedian() {
    if(max_heap.size() == min_heap.size()){
        return (max_heap.top() - min_heap.top()) / 2.0;
    }
    return -min_heap.top();    
    
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */