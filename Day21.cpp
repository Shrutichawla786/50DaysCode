link-->https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
  Q.BFS of graph

Code-->class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
         int node = 0;
        vector<int>ans;
        vector<bool>visited(V, false);
        
        queue<int>q;
        q.push(node);
        visited[node] = true;
        
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            ans.push_back(curr);
            
            for(int child:adj[curr]){
                if(!visited[child]){
                    q.push(child);
                    visited[child] = true;
                }
            }
        }
        return ans;
    }
};
Expected Time Complexity: O(V + E)
Expected Auxiliary Space: O(V)
