class Solution {
public:
    static bool mycomp(vector<int>& A , vector<int>& B){
        if (A[1] < B[1])
            return true;
        return false;
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> valueHolder;
        vector<vector<int>> output;
        //compute the sqrt 
        for(int i=0; i < points.size();i++){
            int value = (points[i][0] * points[i][0]) + (points[i][1] * points[i][1]);
            valueHolder.push_back({i,value});  
        }
        //sort the value holder by the sqrt value
        sort(valueHolder.begin(),valueHolder.end(),mycomp);
        for(int i=0;i<k;i++){
            output.push_back(points[valueHolder[i][0]]);
            
        }
        return output;
    }
};