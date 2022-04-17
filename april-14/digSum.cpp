// C++ implementation of the above approach

#include "bits/stdc++.h"
using namespace std;




void dSum(vector<vector<int>>&arr,int N)
{

	int sum = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j || (i + j) == N - 1) {
				sum += arr[i][j];
			}
			else if (i == 0 || j == 0
					|| i == N - 1
					|| j == N - 1) {
				sum += arr[i][j];
			}
		}
	}

	
	cout << sum << endl;
}


int main()
{
	
	vector<vector<int>>arr = {
                                {0, 6, 8, 9},
                                {20, 22, 28, 29},
                                {36, 38, 50, 6},
                                {64, 66, 100, 122}
                             };
	dSum(arr,4);
	return 0;
}
