#include<bits/stdc++.h>
using namespace std;
void solve(string s,int n){
    if(n==0){
        return;
    }
    cout<<s[n-1];
    solve(s,n-1);
}
int main(){
string s="dipankar";
solve(s,8);
}