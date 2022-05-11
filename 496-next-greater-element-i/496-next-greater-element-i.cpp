class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     vector<int> output;
       for(int i=0; i < nums1.size(); i++){
           for(int j=0; j < nums2.size();j++){
               if(nums1[i] == nums2[j]){
                   int counter = j;
                   int maximum= 0;
                   while(counter <  nums2.size()){
                       maximum =  max(maximum , nums2[counter]);
                       if(maximum > nums1[i]){
                           output.push_back(maximum);
                           break;
                       }
                       counter++;
                   }if(maximum == nums1[i]){
                       output.push_back(-1);
                   }
               }
           }
       }
    return output;
    }
};