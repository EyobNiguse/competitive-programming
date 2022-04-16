class Solution {
public:
    static bool mycomp(vector<int>& A, vector<int>& B)
{
     
    if (A[0] < B[0])
        return true; 
     
    return false;
}
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    
        vector<vector <int>> output;
        //sort the array 
        sort(intervals.begin(),intervals.end(), mycomp);
        for(int i=0; i < intervals.size(); i++){
            if(output.size() == 0){
                output.push_back(intervals[i]);
                
            }else if(intervals[i][0]<= output[output.size()-1][1]){
                     
                    int upper =  max(output[output.size()-1][1],intervals[i][1]);
                    output[output.size()-1][1] =  upper;
            }else{
                output.push_back(intervals[i]);
            }
        } 
        return output;         
 
        
    }
};