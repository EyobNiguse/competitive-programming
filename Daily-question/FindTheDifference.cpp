#include<iostream>
using namespace std;
char findTheDifference(string s, string t);
int main(){
string s = "abcd";
string t = "abcde";
cout << findTheDifference(s,t);
}

char findTheDifference(string s, string t){
      int arr[s.length()];
     int Marr[t.length()];
for(int i =0; i< s.length();i++){
     arr[i] = int(s[i]); 
}
for(int i =0; i< t.length();i++){
     Marr[i] = int(t[i]); 
}
// sort arr 
 for(int i =0; i< s.length();i++){
     for(int j = 0 ; j < s.length();j++){
          if(arr[j] > arr[j+1]){
               swap(arr[j],arr[j+1]);
              
          }
     }
}
 

// sort Marr
 for(int i = 0; i< t.length();i++){
     for(int j = 0 ; j < t.length();j++){
          if(Marr[j] > Marr[j+1]){
               swap(Marr[j],Marr[j+1]);
          }
     }
}

 
// find the weird one 
for(int i = 1; i <= t.size();i++){

     if(i > s.size()){   
      
          return Marr[i];
     }
     if(arr[i] != Marr[i]){
         
          return char(Marr[i]);
     }
     
}
  return -1;
    }
