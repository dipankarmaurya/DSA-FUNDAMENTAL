// C++ program for Merge Sort
#include <iostream>
using namespace std;

// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int array[], int const left, int const mid, int const right)
{
	auto const one = mid - left + 1;
	auto const two = right - mid;

	// Create temp arrays
	auto *leftArray = new int[one],
		*rightArray = new int[two];

	// Copy data to temp arrays leftArray[] and rightArray[]
	for (auto i = 0; i < one; i++)
		leftArray[i] = array[left + i];
	for (auto j = 0; j < two; j++)
		rightArray[j] = array[mid + 1 + j];

	auto j = 0, // Initial index of first sub-array
		k = 0; // Initial index of second sub-array
	int i = left; // Initial index of merged array

	// Merge the temp arrays back into array[left..right]
	while (j < one && k < two) {
		if (leftArray[j] <= rightArray[k]) {
			array[i] = leftArray[j];
			j++;
		}
		else {
			array[i] = rightArray[k];
			k++;
		}
		i++;
	}
	// Copy the remaining elements of
	// left[], if there are any
	while (j < one) {
		array[i] = leftArray[j];
		j++;
		i++;
	}
	// Copy the remaining elements of
	// right[], if there are any
	while (k < two) {
		array[i] = rightArray[k];
		k++;
		i++;
	}
}

// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int array[], int const begin, int const end)
{
	if (begin >= end)
		return; // Returns recursively

	auto mid = begin + (end - begin) / 2;
	mergeSort(array, begin, mid);
	mergeSort(array, mid + 1, end);
	merge(array, begin, mid, end);
}

// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
	for (auto i = 0; i < size; i++)
		cout << A[i] << " ";
}

// Driver code
int main()
{
	int arr[] = { 12,, 5, 6, 7 };
	auto arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	cout << "\nSorted array is \n";
	printArray(arr, arr_size);
	return 0;
}
