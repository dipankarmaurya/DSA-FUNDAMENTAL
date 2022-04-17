
#include <bits/stdc++.h>
using namespace std;


void maxInRow(vector<vector<int>>&arr){
    int row=arr.size();
    int col=arr[0].size();
        for(int j=0;j<row;j++){
            int max=arr[j][0];
            for(int k=0;k<col;k++){
                if(arr[j][k]>max)
                max=arr[j][k];
            }

            cout<<" maxm in row "<<j<<" is "<<max<<endl;
        }
}
void maxInCol(vector<vector<int>>&arr){
    int row=arr.size();
    int col=arr[0].size();
        for(int j=0;j<col;j++){
             int max=arr[0][j];
            for(int k=0;k<row;k++){
                if(arr[k][j]>max)
                max=arr[k][j];
            }

            cout<<" maxm in col "<<j<<" is "<<max<<endl;
        }
}
int main()
{


	vector<vector<int>>arr = {
                                {0, 6, 8, 9, 11},
                                {20, 22, 28, 29, 31},
                                {36, 38, 50, 61, 63},
                                {64, 66, 100, 122, 128}
                             };
         maxInCol(arr);
         maxInRow(arr);                    
	
}

