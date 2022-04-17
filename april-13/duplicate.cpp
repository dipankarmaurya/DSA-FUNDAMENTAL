#include<bits/stdc++.h>
using namespace std;
    int MissingNumber(vector<int>&array, int n) {
       
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=array[i];
        }
        
        int total = n*(n-1)/2;
        
        return sum-total;
    }
    int main(){
        vector<int>arr={1,3,4,2,2};
        cout<<MissingNumber(arr,5);
}
