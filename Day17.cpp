link-->https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1
Q.Sum of nodes on the longest path from root to leaf node
code->
  class Solution
{
public:
    void solve(Node *root , int sum , int & maxsum , int len , int & maxlen){
         if(root==NULL){
            if(len>maxlen){
                maxlen=len ;
                maxsum=sum;
                
            }
            else if(len==maxlen){
                maxsum= max(maxsum , sum);
            }
            return;
        }
        sum = sum+root->data;
        solve(root->left , sum , maxsum , len+1 , maxlen);
        solve(root->right , sum , maxsum , len+1, maxlen);
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int maxsum=INT_MIN;
        int sum=0;
        int len=0;
        int maxlen=0;
        solve(root ,sum , maxsum , len , maxlen );
        return maxsum;
       
    }
};

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
