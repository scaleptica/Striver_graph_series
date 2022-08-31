// Using BFS=>
class Solution {
  public:
    // Function to find the number of islands.
    void bfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>& vis){
        
        vis[i][j] = 1;
        queue<pair<int, int>> q;
        q.push({i, j});
        int n = grid.size();
        int m = grid[0].size();
        
        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            
            q.pop();
            
            for(int delrow=-1; delrow<=1; delrow++){
                for(int delcol=-1; delcol<=1; delcol++){
                    int newrow = i + delrow;
                    int newcol = j + delcol;
                    if(newrow>=0 && newrow<n && newcol>=0 &&
                    newcol<m && grid[newrow][newcol]=='1' && vis[newrow][newcol]==0){
                        vis[newrow][newcol] = 1;
                        q.push({newrow, newcol});
                    }
                    
                }
            }

        }
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        int count=0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    count++;
                    bfs(i, j, grid, vis);
                }
            }
        }
        
        return count;
    }
};

//Using DFS=>
class Solution {
  public:
    // Function to find the number of islands.
    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>& vis){
        vis[i][j] = 1;
        
        int n = grid.size();
        int m = grid[0].size();
        
        for(int delrow=-1; delrow<=1; delrow++){
            for(int delcol=-1; delcol<=1; delcol++){
                int newrow = i + delrow;
                int newcol = j + delcol;
                if(newrow>=0 && newrow<n && newcol>=0 &&
                newcol<m && grid[newrow][newcol]=='1' && vis[newrow][newcol]==0){
                    vis[newrow][newcol] = 1;
                    dfs(newrow, newcol, grid, vis);
                }
                
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        int count=0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    count++;
                    dfs(i, j, grid, vis);
                }
            }
        }
        
        return count;
    }
};
