class Solution {
public:
    int binarySearch(vector<int>& numbers, int key,int l,int r){
        int mid = l + (r - l) / 2;
        if(r>=l){
            if(key == numbers[mid]){
            return mid;
        }
        if(key < numbers[mid]){
           return binarySearch(numbers, key , l,mid-1);
        } if(  key > numbers[mid]){
            return  binarySearch(numbers,key,mid+1,r);
        }
        }
      
        return -1;
         
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int r = 0;
        vector<int>output;
        for(int i=0; i< numbers.size();i++){
            int num  = binarySearch(numbers,target-numbers[i],0,n-1); 
            if( num!= -1 && num!= i){
              output.push_back(min(i+1, num+1));
              output.push_back(max(num+1, i+1));
              return output;
            }
        }
     return output;
    }
};