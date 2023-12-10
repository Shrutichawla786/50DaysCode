Link-->https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1?page=1&difficulty=Easy&sortBy=submissions

Q.Left View of Binary Tree

Code-->

void inorderTraversal(Node*root, vector<int> &v,int level){
    
    if(root==NULL){
        return;
    }
    if(level==v.size()){
        v.push_back(root->data);
    }
    inorderTraversal(root->left , v ,level+1);
    inorderTraversal(root->right,v,level+1);
      
    
}

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>v;
   int level=0;
   inorderTraversal(root  , v , level);
   return v;

   
   
}

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

