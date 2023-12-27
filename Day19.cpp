link-->https://www.geeksforgeeks.org/problems/size-of-binary-tree/1
Q.Size of Binary Tree

Code-->
  int getSize(Node* node)
{
   // Your code here
   if(node==NULL){
       return 0;
   }
   
      int  left=getSize(node->left);
       int right=getSize(node->right);
       
   return left+right+1;
   
}
