class Solution {
public:
    string removeKdigits(string num, int k) {
        int remains = k;
        vector<char> st;
        if(num.length() == 1){
            return "0";
                              
        }
         int i = 0;
        st.push_back(num[0]);
        for(int i=1; i< num.size();i++){
         while( st.size() > 0 && st[st.size()-1] > num[i] && remains > 0){
                st.pop_back();
               
                remains--;
            }
            st.push_back(num[i]);
        }
       cout<<remains<<" ";
        int counter = 1;
        //remove the last 0
        while(st.size() > 0 && st[st.size()-1] == '0' && remains > 0){
            
            st.pop_back();
            
        }
        while(remains > 0 && st.size() > 0){
           if(st[st.size()-1]=='0'){
               st.pop_back();
           }else{
            st.pop_back();
           remains--;
               
           } 
         
           
        }
        cout<<remains<<" here";
        string output="";
    for(int i=0;i< st.size();i++){
        output+=st[i];
    }   
        int ct = 0;
        int lst = 0;
        while(output[ct] == '0'){
            ct++;
            if(output[ct] !='0'){
                lst = ct;
                break;
            }
            
        }
        string temp="";
        if(output=="" || output=="0" || lst == output.length()){
            return "0";
        }
        for(int i=lst; i < output.length();i++){
            temp+=output[i];
        }
        return temp;
    }
    
};