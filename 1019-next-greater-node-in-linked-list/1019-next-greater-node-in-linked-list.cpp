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
    void printCall(vector<vector<int>>arr){
        for(int i=0; i < arr.size();i++ ){
            cout<<arr[i][0]<<" ";
        }
    }
    vector<int> nextLargerNodes(ListNode* head) {
       // unsing the hint
        
        ListNode* cp = head;
        ListNode* cp2 =head;
        int num = 0;
        int num2 = 0;
        vector<vector<int>> stck;
        while(cp2 !=NULL){

            num2++;
            cp2= cp2->next;
        }
        vector<int> output(num2);
     
        while(cp != NULL){
            
            if(stck.size()==0){
               stck.push_back({cp->val,num}); 
            }else{
                
                while( stck.size()  > 0 && cp->val > stck[stck.size()-1][0]){
                    output[stck[stck.size()-1][1]]  = cp->val;                             
                    stck.pop_back();
                    
                }
                stck.push_back({cp->val,num});
                    
        
            }
            cp = cp->next;
            num++;
        }
        printCall(stck);
  
        
  
        return output;
    }
};