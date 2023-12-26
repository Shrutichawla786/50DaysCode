link-->https://www.geeksforgeeks.org/problems/preorder-traversal/1
Q.Preorder Traversal
void pre(Node * root , vector<int>&v){
    if(root==NULL){
        return ;
    }
        v.push_back(root->data);
        pre(root->left , v);
        pre(root->right , v);
    
}

vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>v;
  pre(root,v);
  return v;
 
}
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
