class Solution {
public:
    double dec = 0;
    bool negative=false;
    bool affected=false;
    bool decimalCheck  =false;
    bool done = false;
    int  count =0;
      int initIn=0;
    double myPow(double x, int n) {
       double number;                
        
        if(count==0 ){
          initIn = abs(n);
            count++;
        }
        if(n==0){
            return 1;
        }
        if(n < 0 && affected == false){
            negative =  true;
            affected = true;
        }
        

        if(x==-1.0 && n %2 == 0 || x==1.0){
            return 1.0;
            
        }else if(x==-1.0 && n %2 != 0){
            return -1.0;
        }else{
        number  = myPow(x, n/2);
            
        }
        cout<<n<<" "<<initIn;
        if(abs(n) >  0 ){
            if(n % 2==0){
                if(negative && abs(initIn) == abs(n)){
                    cout<<"here";
                    return 1 / (number*number);
                }
             return number * number ;
                                
            }else{
                
                if(negative && abs(initIn) == abs(n)){
                    cout<<"here";
                
                    return 1 / (x * number * number);
                }
                return x * number * number;
            }
          
                
        }
      
        return 0;
    }
};