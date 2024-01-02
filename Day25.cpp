link-->https://www.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1
Q.k-th smallest element in BST
Code-->
  int solve(Node* root , int &i , int k){
        if(root==NULL){
            return -1;
        }
        //L
        int left=solve(root->left , i , k);
        if(left !=-1){
            return left;
        }
        //n
        i++;
        if(i==k){
            return root->data;
        }
        int right= solve(root->right , i , k);
        return right;
    }
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        int i=0;
        int ans = solve(root ,i , K );
        return ans;
    }
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
