#include<bits/stdc++.h>
using namespace std;
int max(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    int prev=max(arr,n-1);
    if(prev>arr[n-1])
    return prev;
    else
    return arr[n-1];
}
int main(){
int arr[]={1,2,13,6,2,9,2};
cout<<max(arr,7);
}