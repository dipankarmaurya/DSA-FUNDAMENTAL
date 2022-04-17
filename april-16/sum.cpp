#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n){
    if(n==1){
        return arr[0];
    }
 return arr[n-1]+sum(arr,n-1);
}
int main(){
int arr[]={1,2,13,4};
cout<<sum(arr,4);
}