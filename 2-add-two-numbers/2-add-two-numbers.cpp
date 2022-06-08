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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       
      ListNode* one = l1;
      ListNode* two = l2;
       ListNode* maxCont = NULL;
       ListNode* minCont = NULL;
       int count1= 0;
       int count2 = 0;
        // longer one 
        while(one != NULL){
            one = one->next;
            count1++;
        }
        while(two!=NULL){
            two = two->next;
            count2++;
        }
        if(count1 > count2){
            maxCont = l1;
            minCont = l2;
        }else{
            maxCont = l2;
            minCont = l1;
       }  
        int carry=0;
        ListNode* output = NULL;
        int count = 0;
        ListNode* prevPointer = NULL;
        while(maxCont != NULL){
            int sum;
            int val;
            if(minCont != NULL){
            
             sum = maxCont->val + minCont->val + carry;
             minCont = minCont->next; 
             carry = 0;
            
            }else {
             sum = maxCont->val + carry;
             carry = 0;
                
            }
             val  =  sum % 10;    
             if(sum >= 10){
               carry =  sum / 10;                 
             }
            if(output == NULL){
                
                output = new ListNode(val);
                prevPointer =  output;
           
            }else{
               
            ListNode* nn = new ListNode(val);
            prevPointer->next = nn;
            prevPointer = nn;
               
            }
            
            maxCont = maxCont->next;
           
        }
        if(carry > 0){
            ListNode* nn =  new ListNode(carry);
            prevPointer->next = nn;
        }
       cout<<carry<<" \n";
                
    return output;
    }
  
};