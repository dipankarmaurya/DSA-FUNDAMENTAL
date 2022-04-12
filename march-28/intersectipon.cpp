#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int val){
    
    int left =0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==val){
            return mid;
        }
        else if(arr[mid]>val){
            right=mid-1;
        }
        else
        left=mid+1;
    }
    return -1;
}
int main(){
    int arr1[]={1,3,5,6,9,12};
int arr2[]={2,5,7,9};

for(int i=0;i<6;i++){
  int index= binarySearch(arr2,4,arr1[i]);
  if(index!=-1)
     cout<<arr2[index]<<" ";
}
        
}

