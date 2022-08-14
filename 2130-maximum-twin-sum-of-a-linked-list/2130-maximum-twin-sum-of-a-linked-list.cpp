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
    int pairSum(ListNode* head) {
        vector<int> temp;
        ListNode* cp = head;
        while(cp!=NULL){
            temp.push_back(cp->val);
            cp=cp->next;    
        }
        int answer = 0;
        int n = temp.size() -1;
        for(int i =0;i < temp.size();i++ ){
            answer = max(answer , (temp[i] + temp[n-i]));
        }
    return answer;
    }
};