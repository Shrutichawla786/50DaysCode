link-->https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1
Q.Number of occurrence
code-->	void rightOcuurence(int arr[] , int n , int x , vector<int>&v){
        int start=0;
        int end=n-1;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==x){
                ans = mid;
                start=mid+1;
            }
            else if(x>arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            
        }
        v.push_back(ans);
    }
    void leftOcuurence(int arr[] , int n , int x , vector<int>&v){
        int start=0;
        int end=n-1;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==x){
                ans = mid;
                end=mid-1;
            }
            else if(x>arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            
        }
        v.push_back(ans);
        
    }
	int count(int arr[], int n, int x) {
	    // code here
	    vector<int>v;
        leftOcuurence(arr , n ,x,v);
        rightOcuurence(arr , n ,x, v);
        if(v[0]==-1 && v[1]!=-1){
            return 1;
        }
        else if(v[1]==-1 && v[0]!=-1){
            return 1;
        }
        else if(v[1]==-1 &&  v[0]==-1){
            return 0;
        }
        return v[1]-v[0]+1;
	}
Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1)
  
