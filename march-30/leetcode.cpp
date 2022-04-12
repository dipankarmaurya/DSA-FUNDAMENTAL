#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
        
        int start=0;
        int end=numbers.size()-1;
        
        while(start<end){
            int curr_sum=numbers[start]+numbers[end];
            if(curr_sum==target){
                break;
            }
            else if(curr_sum>target){
                end--;
            }
            else{
                start++;
            }
        }
        return {start+1,end+1};
    }

    int main()
{
	vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 10};
    vector<int>ans=twoSum(arr,7);
	
}