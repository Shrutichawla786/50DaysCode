link-->https://www.geeksforgeeks.org/problems/search-a-node-in-bst/1
Q.Search a node in BST
code-->bool search(Node* root, int x) {
    // Your code here
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    else if(x>root->data){
       return  search(root->right , x);
    
    }
    if(x<root->data){
       return  search(root->left , x);
    }
    return false;
    
}

Expected Time Complexity: O(Height of the BST)
Expected Auxiliary Space: O(1).
