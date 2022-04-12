#include<bits/stdc++.h>
using namespace std;

int findFirstMissing(int arr[],int low, int high)
{
	if (low > high)
		return high + 1;

	if (low != arr[low])
		return low;

	int mid = low+(high-low) / 2;
	if (arr[mid] == mid)
		return findFirstMissing(arr,mid+1, high);

	return findFirstMissing(arr, low, mid);
}


int main()
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Smallest missing element is " <<
		findFirstMissing(arr, 0, n-1) << highl;
}

