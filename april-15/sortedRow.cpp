
#include <bits/stdc++.h>
using namespace std;
int countSorted(vector<vector<int>>&arr){
    int row=arr.size();
    int col=arr[0].size();
    int cnt=0;
        for(int j=0;j<row;j++){
            int flag=0;
            for(int k=1;k<col;k++){
                if(arr[j][k]<arr[j][k-1]){
                    flag=1;
                    break;
                }
            }
            if(flag==0)cnt++;
        }
        return cnt;
}
int main()
{


	vector<vector<int>>arr = {
                                {0, 6, 8, 9, 11},
                                {20, 22, 28, 29, 31},
                                {36, 38, 50, 61, 63},
                                {67, 66, 100, 122, 128}
                             };
	
	cout<<countSorted(arr);
	return 0;
}

