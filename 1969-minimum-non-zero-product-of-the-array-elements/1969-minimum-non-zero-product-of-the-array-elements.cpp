class Solution {
public:
        long long  chk  = (pow(10,9) + 7);  
    
      int minNonZeroProduct(int p) {
        long long  val = pow(2,p);
        val--;
        long long  ans = powr(val-1,val/2);
        return  ans*(val%chk)%chk;
    }
    long long powr(long long n, long long  k){
        if(k==0){
            return 1;
        }
        if(k == 1){
            return n % chk;
        }
        if(k%2==0){
            long long temp = powr(n, k/2);
             return (temp*temp)%chk;

        }else{
            long long temp = powr(n, k/2);
            temp =  (temp*temp)%chk;
            return (temp*(n%chk))%chk;
        }
        return 0;
    }
};