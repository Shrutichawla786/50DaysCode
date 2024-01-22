link-->https://www.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1
Q.Count ways to reach the n'th stair
int count(int n , vector<int>&memo){
         if(n==0){
            return 1;
        }
        if(n==1){
            return 1;
        }
        if(memo[n]!=-1){
            return memo[n];
        }
        int a=0;
        int b=0;
        if(n-1>=0){
            a= count(n-1 , memo);
        }
        if(n-2>=0){
            b = count(n-2 , memo);
        }
        return memo[n]= (a+b)%mod;
    }
    
    int countWays(int n)
    {
        // your code here
        vector<int>memo(n+1 , -1);
        return count(n , memo);
    }
Expected Time Complexity : O(n)
Expected Auxiliary Space: O(1)
  
