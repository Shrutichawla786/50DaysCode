link--->https://www.geeksforgeeks.org/problems/display-longest-name0853/1?page=1&difficulty=School&sortBy=submissions
Q.Display longest name
code-->
  
class Solution{
    public:
    string longest(string names[], int n)
    {
        int max=0;
        int count=0;

        for(int i=0;i<n;i++)
        {
            if(max<names[i].size())
            {
                max=names[i].size();
                count=i;
            }
        }
        return names[count];
    }


};


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
