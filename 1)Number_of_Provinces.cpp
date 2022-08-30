//Using adjacency matrix=>
class Solution {
  public:
    void depthFS(vector<vector<int>> adj, int V, int vis[], int start){
        
        vis[start] = 1;
        
        for(int j=0; j<V; j++){
            if(adj[start-1][j]==1 && start-1!=j && vis[j+1]==0){
                depthFS(adj, V, vis, j+1);
            }
        }
    }
    
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        int cnt = 0;
        int vis[V+1] = {0};
        for(int i=1; i<=V; i++){
            if(vis[i]==0){
                cnt++;
                depthFS(adj, V, vis, i);
            }
        }
        return cnt;
        
    }
};


//Using adjacency list=>
class Solution {
  public:
    void depthFS(vector<int> adjl[], int vis[], int start){
        
        vis[start] = 1;
        
        for(auto it : adjl[start]){ 
            if(!vis[it]){
                depthFS(adjl, vis, it);
            }
        }
    }
    
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        int cnt = 0;
        int vis[V+1] = {0};
        
        vector<int> adjl[V+1];
        
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                if(adj[i][j]==1 && i!=j){
                    adjl[i].push_back(j);
                    adjl[j].push_back(i);
                }
            }
        }
        
        for(int i=0; i<V; i++){
            if(vis[i]==0){
                cnt++;
                depthFS(adjl, vis, i);
            }
        }
        return cnt;
        
    }
};
