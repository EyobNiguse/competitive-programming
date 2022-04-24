#include<iostream>
using namespace std;
int main(){
    long long n,m,a;
    long long numberOfStones=0;
    cin>>n;
    cin>>m;
    cin>>a;
    long long num1=0;
    long long num2=0;
    long long remainder = n % a;
    if(remainder < a && remainder > 0 ){
    num1 +=1;
    } 
    num1 += ( n / a );
    remainder = m % a;
    if(remainder < a && remainder > 0){
    num2 +=1;
    }
    num2 += (m/a);
  
    numberOfStones = num1 * num2;
    cout<<numberOfStones;
}
