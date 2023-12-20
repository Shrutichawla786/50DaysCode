link-->https://www.geeksforgeeks.org/problems/binary-search-1587115620/1?page=1&difficulty=Basic,Easy&sortBy=submissions
Q.Binary Search

Code-->  
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int start =0;
        int end = n-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]<k){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};

Expected Time Complexity: O(LogN)
Expected Auxiliary Space: O(LogN) if solving recursively and O(1) otherwise.
