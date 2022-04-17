#include<bits/stdc++.h>
using namespace std;
void printrev(int n){
    if(n==0){
       return; 
    }
   cout<<n%10;
   n/=10;
   printrev(n);
   
}
int main(){
int n=2014;
printrev(n);
}