#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n==0){
        return 1;
    }
   return n*solve(n-1);
}
int main(){
int ans =solve(10);
cout<<ans;
}