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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* output =NULL;
        ListNode* chck = NULL;
        vector<int>v;
        for(int i =0; i < lists.size();i++){
         chck  = lists[i];
            while(chck!=NULL){
            
                v.push_back(chck->val);
                chck = chck->next;
            }
        }   
        sort(v.begin(),v.end());
        ListNode* tail = NULL;
        for(auto i: v){
            ListNode* temp = new ListNode();
            temp->val = i;
            if(output == NULL){
                output = temp;
            }else{
                
            tail->next = temp;
             temp->next= NULL;
                
            }
            
                tail = temp;
                        
        }
        return output;
    }
};