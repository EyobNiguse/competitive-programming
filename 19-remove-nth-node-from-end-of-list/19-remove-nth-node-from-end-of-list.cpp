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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int nth  = n;
        int count = 0;
        ListNode* cp =  head;
        ListNode* output = head;
        while(cp != NULL){
            cp  = cp->next;
            count++;
        }
        cout<<count<<" ";
        int prog = 1;
        while(output != NULL){
           // remove element 
            if(count == nth){
                // remove head
                head = head->next;
                break;
            }
            if(count - prog == (nth)){
                cout<<"here";
               if(output->next->next == NULL){
                  output->next = NULL;
               }else{
                   output->next = output->next->next;
                } 
            break;
            }
          output = output->next;  
          prog++;
        }
    return head;
    }
};