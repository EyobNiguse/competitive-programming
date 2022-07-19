/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void addNode(ListNode* head, ListNode* ln){
        ListNode * tmp = head;
        ListNode* tempo = new ListNode(ln->val);
        ListNode* lst;
        tempo->next = NULL;
        bool inserted=false;
        while( tmp != NULL){
            lst = tmp;
          
            if( ln->val >=  lst->val && lst->next != NULL){
                if( ln->val <= lst->next->val){
                    tempo->next = tmp->next;
                    tmp->next = tempo;
                    inserted= true;
                    break;
                }
            }
      tmp = tmp->next;
        }
  
        if(!inserted){
        lst->next = tempo;
            
        }
        
        
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }else if(list2 == NULL){
            return list1;
        }
        ListNode* output;
        ListNode* ptr;
        if(list1->val >= list2->val){
            ListNode* temp = new ListNode(list1->val);
            temp->next = NULL;
            output = new ListNode(list2->val);
            output->next = temp;
            
        }else{
            ListNode* temp = new ListNode(list2->val);
            temp->next = NULL;
            output = new ListNode(list1->val);
            output->next = temp;
        }
        list1 = list1->next;
        list2 = list2->next;
        
        while(list1!=NULL || list2 !=NULL){
            
            if(list1==NULL){
                  addNode(output, list2);
              
            }else if(list2==NULL ){
                addNode(output, list1);
            }else if(list1->val >= list2->val){
                addNode(output,list2);
                addNode(output, list1);
              
            }else{
            
                addNode(output, list1);
                addNode(output,list2);
            }
            if(list1 != NULL){
    
                list1 = list1->next;
            }
            if(list2 != NULL){
            
            list2 = list2->next;
            
            }
        
        
        }
        return output;
        
    }
};