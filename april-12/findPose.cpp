#include<bits/stdc++.h>
using namespace std;
int findPose(vector<int>&arr,int val){
  int start=0;
  int end=arr.size()-1;
  while(start<=end){
      int mid=start+(end-start)/2;
      if(arr[mid]>val){
          end=mid-1;
      }else{
          start=mid+1;
      }
  }
  return start;
}

int main(){

    vector<int>arr={1,2,4,5,6,7,8};
    
   cout<<findPose(arr,3);

}