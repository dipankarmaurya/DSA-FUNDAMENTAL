#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n==31){
        cout<<31;
        return;
    }
    cout<<n;
    solve(n+2);
}
int main(){
solve(1);
}