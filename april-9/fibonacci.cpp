#include<bits/stdc++.h>
using namespace std;
void solve(int n,int prev,int curr){
    if(n==0){
        return ;
    }
    cout<<prev+curr<<" ";
    int temp=curr;
    curr=prev+curr;
    prev=temp;
    solve(n-1,prev,curr);
}
int main(){

   int prev=-1;int curr=1;
   solve(10,prev,curr);

}