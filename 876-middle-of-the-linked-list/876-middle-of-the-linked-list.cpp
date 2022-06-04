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
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* pointer = head; 
        ListNode* n;
        while(pointer->next != NULL){
            cout<<pointer->val<<" ";
            pointer = pointer->next;
            length++;
        }
     
        int middlePoint = (length + 1) / 2 ; 
        int count = 0 ;
        ListNode* pointer1 = head; 
        while(pointer1->next != NULL){
              if(count == middlePoint){
                n = pointer1; 
                break;
               }
              pointer1 = pointer1->next;
              count++;
        }
        return n;
    }
};