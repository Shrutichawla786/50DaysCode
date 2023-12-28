LINK-->https://www.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1
Q.Lowest Common Ancestor in a Binary Tree

CODE-->
class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node * findLca(Node * root , int n1 , int n2){
        if(root==NULL){
            return NULL;
        }
        if(root->data==n1 || root->data == n2){
            return root;
        }
        
        Node * left = findLca(root->left , n1 , n2);
        Node * right = findLca(root->right , n1 , n2);
        if(left==NULL && right  !=NULL){
            return right;
        }
        else if(left!=NULL && right==NULL){
            return left;
        }
        else if(left!=NULL && right!=NULL){
            return root;
        }
        
        
    }
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       return (findLca(root , n1 , n2));
       
    }
};
Expected Time Complexity:O(N).
Expected Auxiliary Space:O(Height of Tree).
