#include<bits/stdc++.h>
using namespace std;
void printNeg(int arr[],int n){
    if(n==0){
       return; 
    }
   if(arr[n-1]<0)
   cout<<arr[n-1]<<" ";
   printNeg(arr,n-1);
}
int main(){
int arr[]={-1,2,-13,6,-2,9,2};
printNeg(arr,7);
}