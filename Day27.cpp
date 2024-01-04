link-->https://www.geeksforgeeks.org/problems/preorder-to-postorder4423/1
Q.Preorder to PostOrder
code-->
 Node *insertIntoBST(Node * root , int d){
        if(root==NULL){
            root = newNode(d);
            return root;
        }
        if(root->data>d){
            root->left= insertIntoBST(root->left , d);
        }
        else if(root->data<d){
            root->right= insertIntoBST(root->right , d);
        }
        return root;
    }
   
    Node* post_order(int pre[], int size)
    {
        //code here
        Node* root=NULL;
        for(int i=0;i<size;i++){
           root= insertIntoBST(root ,pre[i]);
        }
        return root;
        
    }

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
