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
        ListNode* slow =  head;
        ListNode* fast =  head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverseNode(ListNode* head){
        ListNode* temp =  NULL;
        ListNode* temp2 =NULL;
        while(head!=NULL){
            temp2 =  head->next;
            head->next =  temp;
            temp= head;
            head= temp2;
        }
        head = temp;
       
        return head;
    }
    ListNode* merge(ListNode* left, ListNode* right){
        ListNode* tail = new ListNode();
        ListNode* temp = tail;
        int count = 0;
        while(right && left){
            if(count%2==0){
                tail->next = left;
                left = left->next;
                
            }else{
                tail->next = right;
                right = right->next;
            }
            tail = tail->next;
         count++;
        }
        if(left){
            tail->next =left;
        }
        if(right){
            tail->next =  right;
        }
        return temp->next;
    }
    void reorderList(ListNode* head) {
        ListNode* mid = getMid(head);
        ListNode* tempList = mid;
        ListNode* secondPortion = reverseNode(mid->next);
        mid->next =  NULL;
        head = merge(head, secondPortion);
    }
};