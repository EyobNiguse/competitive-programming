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
    ListNode* getMid(ListNode* head){
        ListNode* slow =  NULL;
        ListNode* fast = NULL;
        slow = head;
        fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
          
        }
        return slow;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        //split the list in to 2 halves
         ListNode* left = head;
         ListNode* right = getMid(head);
         ListNode* temp = right->next;
         right->next  = NULL;
         right = temp;
         left = sortList(left);
         right = sortList(right);
         return  merge(left,right);
        
    }
    ListNode* merge(ListNode* left,ListNode* right){
        ListNode* tail= new ListNode();
        ListNode* temp = tail;
        while(left && right){
      
            
            if(left->val < right->val){
                tail->next =  left;
                left = left->next;
            }else{
                tail->next = right;
                right = right->next;
            }
            tail = tail->next;
        }
        if(left){
            tail->next = left;
        }
        if(right){
            tail->next = right;
        } 
        return temp->next;
    }
};