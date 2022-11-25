class LFUCache {
public:
    unordered_map<int,int>um;
    unordered_map<int,int>fm;
    int  capacity  = 0;
    int t = 0;
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int,int>>> , greater<pair<int , pair<int,int>>>>pq;
    LFUCache(int capacity) {
           this->capacity = capacity;
    }
    
    int get(int key) {
     if(um.find(key)==um.end()){
         return -1;
     }
    put(key,um[key]);
    return um[key];
    }
    
    void put(int key, int value) {
        cout<<capacity<<" ";
        if(capacity == 0){
            return;
        }
        if(um.find(key) == um.end() &&  um.size() == capacity){
            while(um.size() == capacity){
                auto x  = pq.top();
                if(x.first == fm[x.second.second]){
                   fm.erase(x.second.second);
                   um.erase(x.second.second);
                }
               pq.pop();              
            }
        }
        um[key] = value;
        fm[key]++;
        pq.push({fm[key],{t++,key}});
        
        
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */