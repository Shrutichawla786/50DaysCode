Link-->https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1?page=3&difficulty=Easy&sortBy=submissions
Q.Check if array is sorted

code-->
  class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                return false;
            }
        }
        return true;
    }
};

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

