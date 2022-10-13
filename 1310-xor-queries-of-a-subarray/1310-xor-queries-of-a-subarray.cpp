class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>output;
        vector<int>ps;
        ps.push_back(arr[0]);
        for(int i =1; i < arr.size();i++){
            ps.push_back(ps[ps.size()-1] ^ arr[i]);
        }
        for(int i = 0; i < queries.size();i++){
            if(queries[i][0]==0){
                output.push_back(ps[queries[i][1]]);
            }else{
                output.push_back(ps[queries[i][1]] ^ ps[queries[i][0]-1]);
            }
        }
        return output;
    }
};