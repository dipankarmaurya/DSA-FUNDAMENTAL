
#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

void print(vector<vector<int>>&arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void rotate(vector<vector<int>>&arr,int k){
    int row=arr.size();
    int col=arr[0].size();
    for(int i=0;i<k;i++){
        for(int j=0;j<row;j++){
            int temp=arr[j][col-1];
            for(int k=col-2;k>=0;k--){
                arr[j][k+1]=arr[j][k];
            }
            arr[j][0]=temp;
        }
    }
    print(arr);
}
int main()
{
	int n = 4; 
	int m = 5; 

	vector<vector<int>>arr = {
                                {0, 6, 8, 9, 11},
                                {20, 22, 28, 29, 31},
                                {36, 38, 50, 61, 63},
                                {64, 66, 100, 122, 128}
                             };
	int k = 1;
    print(arr);
	rotate(arr,k);
	return 0;
}

