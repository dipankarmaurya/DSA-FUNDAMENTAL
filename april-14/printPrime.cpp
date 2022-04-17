// C++ implementation of the above approach

#include "bits/stdc++.h"
using namespace std;



bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return n>1;
}
void printPrime(vector<vector<int>>&arr,int N,int M)
{

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if(j>=i&&isPrime(arr[i][j])){
               cout<<"p ";
            }
            else{
                cout<<arr[i][j]<<" ";
            }
		}
        cout<<endl;
	}
}


int main()
{
	
	vector<vector<int>>arr = {
                                {0, 6, 8, 7, 11},
                                {20, 22, 28, 29, 31},
                                {36, 38, 50, 61, 63},
                                {64, 66, 100, 122, 128}
                             };
	printPrime(arr,4,5);
	return 0;
}
