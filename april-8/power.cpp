#include<bits/stdc++.h>
using namespace std;
void solve(int p,int n){
    if(n==0){
        return 1;
    }
    if(n==1)return p;
   return p*solve(p,n-1);
}
int main(){
int ans =solve(10);
cout<<ans;
}