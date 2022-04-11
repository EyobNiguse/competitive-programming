#include<iostream>

char findTheDifference(string s, string t) {
        int sumA = 0;
int  sumB = 0 ;
char temp;
for(int i =0; i< s.length();i++){
     char temp = s[i];
     sumA += int(temp);

}
for(int i =0; i< t.length();i++){
     char temp = t[i];
     sumB += int(temp);
} 
return  char(abs(sumA-sumB));
    }