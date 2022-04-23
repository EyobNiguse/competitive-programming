class Solution {
public:
 
    int minSetSize(vector<int>& arr) {
        int maxI = 0;
        int target = arr.size() / 2;
        int size = 0;
        if(target == 1){
            return 1;
        }
        for(int i=0; i < arr.size() ; i++){
            maxI  =  max(maxI, arr[i]);
        }
        
        vector<int> countSort(maxI+1);
        for(int i=0;i < arr.size();i++){
            countSort[arr[i]]+=1;
        }    
        sort(arr.begin(), arr.end(),[&](int& A, int& B){
           if(countSort[A] > countSort[B]){
              return true; 
           }
            return false;
        });
        int index = 0;
        while(target > 0){
            target -= countSort[arr[index]]; 
            index += countSort[arr[index]];
            size++;
          
                                
        
            
             
        }    
        cout << countSort[arr[0]];
        return size;
    }
};