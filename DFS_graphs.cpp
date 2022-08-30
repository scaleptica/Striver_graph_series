    // Function to return a list containing the DFS traversal of the graph.
    void depthFS(vector<int> adj[], int vis[], int start, vector<int> &dfs){
        
        vis[start]=1;   /*we start off by marking the visited array of
                        the current node (node on which we are on) as 1*/
                        
        dfs.push_back(start);   //Then we push that node into the answer vector
        
        for(it : adj[start]){   /*now, we check if the neighbors of that node
                                have been visited before or not, if not, then
                                we call the depthFS function for that node*/
            if(!vis[it]){
                depthFS(adj, vis, it, dfs);
            }
        }
        
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V] = {0};   //visited array with all values '0' created
        int start = 0;  //strting node initialised
        vector<int> dfs;
        
        depthFS(adj, vis, start, dfs);
        
        return dfs;
        
    }
