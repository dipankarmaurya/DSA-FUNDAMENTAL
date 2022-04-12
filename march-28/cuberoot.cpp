#include<bits/stdc++.h>
using namespace std;
int binarySearch(int n){
    
    int left =0;
    int right=n-1;
    int ans;
    int val=n;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(mid*mid*mid==val){
            return mid;
        }
        else if(mid*mid*mid>val){
            right=mid-1;
        }
        else{
           left=mid+1;
           ans=mid;
        }
        
    }
    return ans;
}
int main(){
    
    int n=27;
    int cubeRoot= binarySearch(n);
    cout<<"cube root of "<<n<<" is "<<cubeRoot;
}

