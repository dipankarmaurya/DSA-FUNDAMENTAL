
#include <bits/stdc++.h>
using namespace std;
void sortSquares(int arr[], int n)
{
	int K = 0;
	for (K = 0; K < n; K++)
		if (arr[K] >= 0)
			break;

	int i = K - 1; // Initial index of first half
	int j = K; // Initial index of second half
	int ind = 0; // Initial index of temp array

	// store sorted array
	int temp[n];
	while (i >= 0 && j < n) {
		if (arr[i] * arr[i] < arr[j] * arr[j]) {
			temp[ind] = arr[i] * arr[i];
			i--;
		}
		else {
			temp[ind] = arr[j] * arr[j];
			j++;
		}
		ind++;
	}
	while (i >= 0) {
		temp[ind] = arr[i] * arr[i];
		i--;
		ind++;
	}
	while (j < n) {
		temp[ind] = arr[j] * arr[j];
		j++;
		ind++;
	}

	// copy 'temp' array into original array
	for (int i = 0; i < n; i++)
		arr[i] = temp[i];
}

// Driver program to test above function
int main()
{
	int arr[] = { -6, -3, -1, 2, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Before sort " << endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	sortSquares(arr, n);

	cout << "\nAfter Sort " << endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}
