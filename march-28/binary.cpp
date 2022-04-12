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
    int arr[]={1,3,5,6,9,12};

    int index= binarySearch(arr,6,5);
    cout<<"element found at index "<<index;
}

