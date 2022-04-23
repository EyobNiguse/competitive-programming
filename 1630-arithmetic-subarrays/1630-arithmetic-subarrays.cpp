class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> output;
        for(int i=0; i < l.size();i++){
            int size = r[i] -  l[i] + 1 ;
            vector<int> temp(size);
            auto start = nums.begin() + l[i]; 
            auto end = nums.begin() + r[i] + 1;
            copy(start , end ,temp.begin());
            sort(temp.begin(),temp.end());
            int count = 0;  
            int diff = temp[1] -  temp[0];
            int yes = 0;
      while(count < size){
 
      if((temp[0]+(diff * count))  == temp[count]){
 
          yes++;
      
      }else{
      
          break;
      }
       count++; 
    }
       if(yes == size){
        output.push_back(true);       
       }else{
        output.push_back(false);
       }
            
        }
        return output;
    }
};