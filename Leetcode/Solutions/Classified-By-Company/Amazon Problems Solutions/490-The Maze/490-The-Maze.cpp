class Solution {
public:
    int n , m;
    int dx[4] = {0 , 0 , 1 , -1};
    int dy[4] = {1 , -1 , 0 , 0};

    bool isValid(int x, int y)
    {
        return x >= 0 && x < n && y >= 0 && y < m;
    }

    bool hasPath(vector<vector<int>>& maze, vector<int>& start, vector<int>& destination) {
        m = maze.size();
        n = maze[0].size();
        queue<pair<int, int>> q;
        q.push({start[0], start[1]});
        int vis[n][m];
        for(int i = 0 ; i < n ; ++i)
            for(int j = 0 ; j < m ; ++j)
                vis[i][j] = 0;

        vis[start[0]][start[1]] = 1;

        while (!q.empty()) {
            int ux = q.front().first;
            int uy = q.front().second;
            q.pop();
            for (int i = 0; i < 4; ++i) {
                int newX = ux + dx[i];
                int newY = uy + dy[i];
                if(isValid(newX , newY))
                {
                    if(!vis[newX][newY] && maze[newX][newY] == 0)
                    {
                        q.push({newX, newY});
                        vis[newX][newY] = true;
                    }
                }
                if (ux == destination[0] && uy == destination[1] && (!isValid(ux + 1 , uy) || maze[ux + 1][uy] == 1))
                    return true;
            }
        }
        return false;
    }
};