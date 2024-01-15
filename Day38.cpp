Link-->https://www.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1
Q.Longest Common Prefix in an Array
Code-->
  string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string ans="";
        for(int i=0;i<arr[0].length();i++){
            char ch = arr[0][i];
            bool match = true;
            
            for(int j=1;j<N;j++){
                if(arr[j].size()<i||ch!=arr[j][i]){
                    match=false;
                    break;
                }
            }
            if(match == false){
                break;
            }
            else{
                ans.push_back(ch);
            }
        }
        if(ans==""){
            return "-1";
        }
        return ans;
    }


Expected Time Complexity: O(M*N).
Expected Auxiliary Space: O(M).
