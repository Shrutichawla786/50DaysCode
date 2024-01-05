link-->https://www.geeksforgeeks.org/problems/bst-to-max-heap/1?page=2&category=Heap&sortBy=submissions
q.BST to max heap
Cosde-->
  class Solution{
  public:
  void inorder(Node * root , vector<int>&v){
      if(root==NULL){
          return;
      }
      inorder(root->left , v);
      v.push_back(root->data);
      inorder(root->right ,v);
  }
 
    void solve(Node *root, int &ind, vector<int> &v) {
        if(!root)
            return;
            
        root->data = v[ind];
        ind--;
        
        solve(root->right, ind, v);
        solve(root->left, ind, v);
    }

    void convertToMaxHeapUtil(Node* root) {
        vector<int> v;
        inorder(root, v);
        
        int ind = v.size() - 1;
        solve(root, ind, v);
    }       
};
Expected Time Complexity : O(n)
Expected Auxiliary Space : O(n)
