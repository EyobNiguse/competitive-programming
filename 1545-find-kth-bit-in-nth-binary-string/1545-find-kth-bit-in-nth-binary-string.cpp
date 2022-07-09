class Solution {
public:

    char findKthBit(int n, int k) {
        return findBit(n)[k-1];  
    }
    string findBit(int n){
        if(n==1){
            return "0";   
        }
        string temp = "";
        string prev = findBit(n-1);
        for(char x: prev){
            if(x == '0'){
                temp+='1';
                
            }else{
                temp+='0';
            }
        }
        reverse(temp.begin(), temp.end());   

        string output =  prev + "1" + temp;
 
        return output;
    }
};