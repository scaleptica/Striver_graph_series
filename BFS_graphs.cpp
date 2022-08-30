    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V] = {0};
        vis[0] = 1;     //1=>true=>visited
        vector<int> bfs;
        
        queue<int> q;
        q.push(0);  //graph has 0 based indexing, so, pushing the 1st node into the queue
        
        while(!q.empty()){
            int currentNode = q.front();
            q.pop();
            bfs.push_back(currentNode); /*as we pop out nodes from the queue, we will
                                        subsequently push it into the answer vector*/
            
            for(auto it : adj[currentNode]){    /*Here, we check for the neighbor nodes of the
                                                node that we are currently on*/
                
                if(vis[it]!=1){ /*if the neighbor node hasn't been visited before, then
                                we change its status to visited and push it into the queue*/
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        
        return bfs;
        
    }
