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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int> um;
        ListNode* cp = head;
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* ans = dummy;
        while(cp!= NULL){
            um[cp->val]++;
            cp =  cp->next;
            
        }
        while(dummy&& dummy->next!=NULL){
          while(dummy->next && um[dummy->next->val] > 1){
              int count = um[dummy->next->val];
              while(count > 0){
                  dummy->next = dummy->next->next;
                  count--;
              }
          }
            dummy = dummy->next;
            
        }
    return ans->next;
    }
};