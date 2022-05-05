class Solution {
public:
    int maxArea(vector<int>& height) {
             int l = 0;
             int r = height.size()-1;
             int number = 0;
          if(height.size() == 2){
              
              return min(height[0],height[1]) * 1;
          }
          while( l < r ){
              int minI = min(height[l],height[r]);
              number = max(number, (minI * (r - l)));
              if(height[l] <= height[r]){
                  l++;                  
              }else if(height[r] <= height[l]){
                  r--;
              }
              
              
                
          }
        return number;
    }
};