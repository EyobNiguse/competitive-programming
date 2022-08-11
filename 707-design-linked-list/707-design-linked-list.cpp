class MyLinkedList {
public:
    int val;
    MyLinkedList* next=NULL;
    MyLinkedList* head  = NULL;
    MyLinkedList() {
       
    }
    void printList(MyLinkedList* head){
        MyLinkedList* cp = head;

        while(cp!=NULL){
            cout<<cp->val<<" ";
            cp = cp->next;
        }
        cout<<endl;
    }
    int get(int index) {
       MyLinkedList* cp = this->head;
        int count =0;
        while(cp && index > 0){
          
            cp = cp->next;
index--;
        
        }
        
        
        if(index || cp==NULL)
            return -1;
        return cp->val;
       
    }
    
    void addAtHead(int val) {
        MyLinkedList* newHead  = new MyLinkedList();
        newHead->val = val;
 
        if(this->head == NULL){
            this->head = newHead;
            newHead->next = NULL;
        }else{
        newHead->next =  this->head;
        this->head = newHead;
        }
     
      

     
     
    }
    
    void addAtTail(int val) {
         
        int count = 0;
        MyLinkedList* tail = new MyLinkedList();
        tail->val  = val;
        tail->next = NULL;
        MyLinkedList* cp = this->head;
     
        while(cp!=NULL && cp->next != NULL){
            cp=cp->next;
            count++;
        }
        if(this->head==NULL){
          this->head = tail;
            // this->addAtHead(val);
        }else{
        cp->next = tail;
             
        }
       
     
        
    }
    
    void addAtIndex(int index, int val) {
        if(this->head == NULL && index!= 0){
            return;
        }
      MyLinkedList* newList  =  new MyLinkedList();
      newList->val = val;
      MyLinkedList* cp = this->head;
      MyLinkedList* prev = cp;
      int count = 0;
        while(cp!= NULL && cp->next != NULL && count < index ){
            prev = cp;
            cp = cp->next;
            count++;
        }

       if(count <=  index+1 ){
        if(index == 0 ){
       newList->next = prev;     
       this->head = newList;
        } else if(index == count+1){this->addAtTail(val);}else{

        MyLinkedList* n = prev->next;
        prev->next = newList;
        newList->next = n;     
         
        }
    
       
       }
       
  
    }
    
    void deleteAtIndex(int index) {
        MyLinkedList* cp  = this->head;
        MyLinkedList* prev =cp;
        int count =0;
        while(cp->next != NULL && count < index){
            prev = cp;
            cp = cp->next;
            count++;
        }
 
        if(count == index){
          if(index == 0 ){
              this->head = head->next;
          }else{
            
              prev->next = cp->next;
              delete cp;
          }        
        }
         
    
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */