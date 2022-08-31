//Using BFS=>
class Solution {
    
private:
    int dx[4] = {-1, +1, 0, 0};
    int dy[4] = {0, 0, -1, +1};
    
public:

    void bfs(int newColor, int i, int j, vector<vector<int>> &image, vector<vector<int>> &vis){
        vis[i][j]=1;
        int n = image.size();
        int m = image[0].size();
        queue<pair<int, int>> q;
        int originalCol = image[i][j];
        q.push({i, j});
        
        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            image[i][j] = newColor;
            q.pop();
            
            for(int a=0; a<4; a++){
                int nr = i + dx[a];
                int nc = j + dy[a];
                if(nr>=0 && nr<n && nc>=0 && nc<m && image[nr][nc]==originalCol
                && vis[nr][nc]==0){
                    vis[nr][nc]=1;
                    q.push({nr, nc});
                }
            }
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        int n = image.size();
        int m = image[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        bfs(newColor, sr, sc, image, vis);
        
        return image;
    }
};
