class Solution {
public:
     static bool comp(string& A, string& B){
         if(A[0] > B[0]){
             return true;
         }else if(A[0] == B[0]){
             if( A+B > B+A){
                 return true;
             }
         }
         return false;
     }
    string largestNumber(vector<int>& nums) {
        string output="";
        vector<string> cpOut(nums.size());
        vector<string> out;
  for(int i=0; i < cpOut.size();i++){
          cpOut[i] = to_string(nums[i]);
      }
        //sort by intials in reverse
    sort(cpOut.begin(),cpOut.end(),comp);
  // sort by  max number
      for(int i=0; i < cpOut.size();i++){
          // cout<< cpOut[i]<<" ";
      }
// append to ouput
        for(int i=0;i<cpOut.size();i++){
            output+=cpOut[i];
        }
     if(output[0]=='0'){
         output = "0";
     };
    return output;
    }
   
};