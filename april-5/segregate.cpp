// C++ program for the above approach
#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

bool isPrime(int n)
{
	for(int i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
	return n>1;
}

void segregatePrimeNonPrime(
	int arr[], int N)
{
	// Initialize left and right pointer
	int left = 0, right = N - 1;

	// Traverse the array
	while (left < right) {
		while (isPrime(arr[left]))
			left++;
		while (!isPrime(arr[right]))
			right--;

		/
		if (left < right) {

			swap(&arr[left], &arr[right]);
			left++;
			right--;
		}
	}
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
}


int main()
{
	int arr[] = { 2, 3, 4, 6, 7, 8, 9, 10 };
	int N = sizeof(arr) / sizeof(arr[0]);

	segregatePrimeNonPrime(arr, N);

	return 0;
}
