class Solution {
public:
    int dx[4] = {1 , -1 , 0 , 0};
    int dy[4] = {0 , 0 , 1 , -1};
    int vis[301][301];
    int n , m;
    bool valid(int x , int y)
    {
        return x >= 0 && x < n && y >= 0 && y < m ;
    }
    void DFS(int x , int y , vector<vector<char>>& grid)
    {
        if(!valid(x , y))
            return;
        vis[x][y] = 1;
        for(int i = 0 ; i < 4 ; ++i)
        {
            int newX = dx[i] + x;
            int newY = dy[i] + y;
            if(valid(newX , newY))
            {
                if(grid[newX][newY] == '1' && !vis[newX][newY])
                    DFS(newX , newY , grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int ans = 0;
        n = grid.size();
        m = grid[0].size();
        for(int i = 0 ; i < n ; ++i)
        {
            for(int j = 0 ; j < m ; ++j)
            {
                if(!vis[i][j] && grid[i][j] == '1')
                {
                    ++ans;
                    DFS(i , j , grid);
                }
            }
        }
        return ans;
    }
};