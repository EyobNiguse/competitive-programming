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
    void addNode(ListNode* head, int ln){
        ListNode* tmp = head;
        ListNode* tempo = new ListNode(ln);
        tempo->next =  NULL;
        ListNode* lst;
        while(tmp != NULL){
         
            lst = tmp;
          
            tmp = tmp->next;
        }
        lst->next = tempo;
       
        cout<<endl;
    }
    ListNode* deleteDuplicates(ListNode* head) {
             ListNode* cphead  = head;
             ListNode* cphead2 = head;
             vector<int> vals;
             ListNode* output;
            unordered_map<int, int> counter;
        if(head == NULL){
            return head;
        }else{
            counter[head->val]++;
            ListNode* temp = new ListNode(head->val);
            output= temp;
            temp->next = NULL;
        }
        while(cphead != NULL){
           
            counter[cphead->val]++;
        
            vals.push_back(cphead->val);                
  
            cphead = cphead->next;
            
        }
         
        for(auto x : vals){
            cout<<counter[3]<<" ";
             if(counter[x] == 1){
                 // cout<<"er"<<x;
                 
                addNode(output, x);
            }else if(counter[x] > 1){
                counter[x]--;
            }
        }
 

        return output;
    }
};