link-->https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1
Q.First non-repeating character in a stream
code-->string FirstNonRepeating(string A){
		    // Code here
		    string s="";
		    unordered_map<char , int>m;
		    queue<char> q;
		    for(int i=0;i<A.length();i++){
		        char ch= A[i];
		        q.push(ch);
		        m[ch]++;
		        while(!q.empty()){
		            if(m[q.front()]>1){
		                q.pop();
		            }
		            else{
		                s.push_back(q.front());
		                break;
		            }
		        }
		        if(q.empty()){
		            s.push_back('#');
		        }
		    }  
		    return s;
		}
Expected Time Complexity: O(n)
Expected Space Complexity: O(n)
  
