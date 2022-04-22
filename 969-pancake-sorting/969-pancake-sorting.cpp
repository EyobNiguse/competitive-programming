class Solution {
public:
    int maxFind(vector<int> arr, int upto){
        int maxIndex = 0;    
        for(int i=0; i < upto; i++){
            if(arr[maxIndex] <  arr[i]){
                maxIndex  = i;
            }
        }
        return maxIndex;
    }
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> output;
        int num = arr.size();
         int count = 0;
        // if sorted return empty 
        for(int i=0; i <  arr.size() - 1 ; i++){
            if(arr[i] < arr[i+1]){
                count++;
            }
        }
        
        if(count == num - 1){
            return {};
        }
      while(num > 0){
           //first bring the large element to the first index 
           int maxI = maxFind(arr,num);
           reverse(arr.begin(), arr.begin()+maxI+1);
            output.push_back(maxI+1);
          // then swap the whole array up to the last unsorted index
            reverse(arr.begin(), arr.begin()+num);
            output.push_back(num);
            num--;
    }
 
    return output;
    }
};