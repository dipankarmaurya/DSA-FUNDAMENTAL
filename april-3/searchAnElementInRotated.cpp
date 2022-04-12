class Solution {
public:
    int findPivotPosition(vector<int>&arr,int lo,int hi){
        //int pivot;
         while (lo < hi) {
      int mid = (lo + hi) / 2;
      if (arr[mid] < arr[hi]) { // pivot will lie on left side
        hi = mid;
      } else if (arr[mid] > arr[hi]) { // pivot will lie on right side
        lo = mid + 1;
      } 
    }
       return hi; 
}
    
    int binarySearch(vector<int>&arr,int low,int high,int target){
       if(high>=low){
           
           int mid = low+(high-mid)/2;
           if(arr[mid]==target){
               return mid;
           }
           else if(arr[mid]>target){
               return binarySearch(arr,low,mid-1,target);
           }
           else{
                 return binarySearch(arr,mid+1,high,target);
           }
           
       } 
       
        return -1;
    }
    int search(vector<int>& nums, int target) {
        
       int pivotPostion =findPivotPosition(nums,0,nums.size()-1);;
        cout<<pivotPostion;
        if(nums[pivotPostion]==target)
            return pivotPostion;
         if(nums[nums.size()-1]==target)
             return nums.size()-1;
        if(nums[nums.size()-1]>target){
          return  binarySearch(nums,pivotPostion,nums.size()-1,target);
        }
        else{
          return binarySearch(nums,0,pivotPostion-1,target);
        }
    }
    
};