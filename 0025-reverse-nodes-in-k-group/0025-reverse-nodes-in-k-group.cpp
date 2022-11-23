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
 

    ListNode* reverseKGroup(ListNode* head, int k) {
      
          ListNode* cur = head;
         for(int i = 0; i < k;i++){
             if(cur==NULL) return head;
             cur = cur->next;
         }
        ListNode* curr = head;
        ListNode* next  = NULL;
        ListNode* prev = NULL;
       for(int i =0; i < k ;i++){
           next = curr->next;
           curr->next = prev;
           prev= curr;
           curr =next; 
       }
        head->next = reverseKGroup(curr,k);
        return prev;
    }
};