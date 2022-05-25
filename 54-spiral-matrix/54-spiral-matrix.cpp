class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> output;
        
        int leftEnd= matrix[0].size();
        int rightEnd = 0;
        int upperEnd = 0;
        int lowerEnd  =  matrix.size();
        if(matrix[0].size() == 1){
            for(int i = 0 ; i<  matrix.size();i++){
                output.push_back(matrix[i][0]);
            }
            return output;
        }
        while(upperEnd < lowerEnd ){
            for(int i=rightEnd; i < leftEnd;i++){
                
                    output.push_back(matrix[upperEnd][i]);
                
            }
            if(output.size() == matrix.size() * matrix[0].size()){
                break;
            }
            upperEnd++;
             for(int i=upperEnd; i < lowerEnd;i++){
                    
                 output.push_back(matrix[i][leftEnd-1]);
                 
             }
             leftEnd--;
               if(output.size() == matrix.size() * matrix[0].size()){
                break;
            }
            for(int i= leftEnd-1; i >= rightEnd ; i--  ){
                    output.push_back(matrix[lowerEnd -1 ][i]);
                
            }
            lowerEnd--;
            if(output.size() == matrix.size() * matrix[0].size()){
                break;
            }
            for(int i=lowerEnd-1; i >= upperEnd;i--){
                cout<<" {" << lowerEnd << " "<<upperEnd<<" }";
                    output.push_back(matrix[i][rightEnd]);
                
            }
            rightEnd++;
            if(output.size() == matrix.size() * matrix[0].size()){
                break;
            }
           
        }
        return output;
    }
};