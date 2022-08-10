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
    ListNode* insertionSortList(ListNode* head) {
       ListNode* cp = head;
       ListNode* temp = new ListNode();
        while(cp!=NULL){
            ListNode* cp2 = temp;    
            while( cp2->next != NULL && cp2->next->val < cp->val){
                cp2 = cp2->next;
            }
            ListNode* next = cp->next;
            cp->next = cp2->next; 
            cp2->next = cp;
            cp = next;

        }
    return temp->next;
    }
};