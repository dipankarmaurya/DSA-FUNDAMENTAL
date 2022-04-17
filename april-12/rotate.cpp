#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>&arr){
    int temp=arr[arr.size()-1];
    int i= arr.size()-2;
    while(i>=0){
        arr[i+1]=arr[i];
        i--;
    }
    arr[0]=temp;
}

int main(){

    vector<int>arr={1,2,3,4,5,6,7,8};
    int k=3;
    
    for(int i=0;i<k;i++){
        rotate(arr);
        for(int i=0;i<arr.size();i++){
              cout<<arr[i]<<" ";
    }
    cout<<endl;
    }

}