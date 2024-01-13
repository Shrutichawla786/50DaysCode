link-->https://www.geeksforgeeks.org/problems/k-th-largest-sum-contiguous-subarray/1
Q.K-th Largest Sum Contiguous Subarray
code-->
int kthLargest(vector<int> &arr,int N,int K){
        vector<int> sumStore;
        for (int i=0;i<N;i++){
            int sum =0;
            for(int j=i;j<N;j++){
                sum = sum+arr[j];
                sumStore.push_back(sum);
            }
        }
        sort(sumStore.begin() , sumStore.end());
        return sumStore[sumStore.size()-K];
    }
Expected Time Complexity: O(N2 * log K)
Expected Auxiliary Space: O(K)
