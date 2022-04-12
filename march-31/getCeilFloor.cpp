#include<bits/stdc++.h>
using namespace std;
int getCeil(int nums[], int n, int x)
{
    int low = 0, high = n - 1, mid;
    int ceil = -1;
 
    while (low <= high)
    {
        
        mid = (low + high) / 2;
 
       
        if (nums[mid] == x) {
            return nums[mid];
        }
 
       
        else if (x < nums[mid])
        {
            ceil = nums[mid];
            high = mid - 1;
        }
 
        else {
            low = mid + 1;
        }
    }
 
    return ceil;
}
 

int getFloor(int nums[], int n, int x)
{
    int low = 0, high = n - 1, mid;
 
  
    int floor = -1;
 
   
    while (low <= high)
    {
        //
        mid = (low + high) / 2;
 
        if (nums[mid] == x) {
            return nums[mid];
        }
        else if (x < nums[mid]) {
            high = mid - 1;
        }
        else {
            floor = nums[mid];
            low = mid + 1;
        }
    }
 
    return floor;
}

int main()
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 10};
	int ceil =getCeil(arr,9,5);
    int floor =getFloor(arr,9,5);
}
