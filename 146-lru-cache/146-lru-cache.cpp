class Node {
public:
    Node* next;
    Node* previous;
    int key;
    int value;
    
    Node(int key, int value) {
        this->key = key;
        this->value = value;
        next = NULL;
        previous = NULL;
    }
};
class LRUCache {
public:  
    unordered_map<int, Node*> um;
    Node* list ;
    Node* end ;
    int capa;
    LRUCache(int capacity){
        this->capa = capacity; 
        this->list = NULL;
        this->end = NULL;
    }

    void moveToLast(Node* temp){
        // could update the head
       
        if(end->key == temp->key){
            return;
        }
        if(temp->key ==  list->key){
            
            if(list->next){
                    list->next->previous =  NULL;
                }
          list =  list->next;
        
        }
        if(temp->next){
             temp->next->previous = temp->previous;
         }
        if(temp->previous){
        
             temp->previous->next = temp->next;         
        }
        if(end != NULL){
            end->next = temp;
            temp->previous = end;
            temp->next =  NULL;
                         
        }
        end = temp;
        
        
    }
    void addToLast(Node* temp){
  
      end->next = temp;
      temp->previous = end;
      end = temp;
       }
    void evictLRU(){
        // updates the head
        um.erase(list->key);
        if(list->next){
            list->next->previous = NULL;
        }
         list = list->next;
        
    }
 
    
    int get(int key) {
        if(um.find(key) !=um.end()){ 
            moveToLast(um[key]);
            return um[key]->value;
        }
        return -1;
    }
    
    void put(int key, int value) {
          if(um.size() == 0){
              Node* temp = new Node(key,value);
              um[key] =  temp;
              list = temp;
              end = temp;
              return;
          }
         if(capa == um.size()){
            
                // does it exist
                if(um.find(key) != um.end()){
                    // update the key and move to last
                    um[key]->value = value;
                    moveToLast(um[key]);
                    
                }else{
                    Node* temp =  new Node(key,value);
                    um[key] =  temp;
                    addToLast(temp);
                    evictLRU();
                }
            }else{
                //does it exist
                 if(um.find(key) != um.end()){
                     um[key]->value = value;
                     moveToLast(um[key]);
                    
                }else{
                     Node* temp = new Node(key,value);
                     addToLast(temp);
                     um[key] = temp;
                 }
            }    
        // printList(list);
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */