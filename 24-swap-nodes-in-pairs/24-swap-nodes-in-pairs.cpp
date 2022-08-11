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
    void displayList(ListNode* head){
        ListNode* cp =head;
        while(cp!=NULL){
            cout<<cp->val<<" ";
            cp =cp->next;
        }
        cout<<endl;
    }
    ListNode* swapPairs(ListNode* head) {
        ListNode* cp = head;
        ListNode* prev = cp;
        
        int count = 0;
        
        while(cp!=NULL &&  cp->next != NULL){
          // cout<<cp->next->val<<" ";
            if(count == 0){

          ListNode* pnt  = cp;
          ListNode* next = cp->next;
          ListNode* lst = next->next;
          pnt->next = lst;
          next->next = pnt;
          head = next;      
         }else{
                if(cp->next->next == NULL){
                    return head;
                }
         ListNode* pnt  = cp;
         ListNode* next = cp->next;
         ListNode* lst = next->next;
         pnt->next  = lst;
         next->next= lst->next;
         lst->next = next;
          cp = next; 
        }
       

            // cout<<target->next->val<<" ";
            count++;
            displayList(head);
        }
    return head;
    }
};