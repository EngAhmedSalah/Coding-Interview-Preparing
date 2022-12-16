class Solution {
public:
    int preColor , color;
    int n , m;
    int vis[51][51];
    int dx[4] = {0 , 0 , -1 , 1};
    int dy[4] = {1 , -1 , 0 , 0};
    bool valid(int x , int y)
    {
        return x >= 0 && x < n && y >= 0 && y < m;
    }
    void DFS(int x , int y , vector<vector<int>>& image)
    {
        if(!valid(x , y))
            return;
        vis[x][y] = 1;
        image[x][y] = color;
        for(int i = 0 ; i < 4 ; ++i)
        {
            int newX = dx[i] + x;
            int newY = dy[i] + y;
            if(valid(newX , newY))
            {
                if(!vis[newX][newY] && image[newX][newY] == preColor)
                    DFS(newX , newY , image);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        color = newColor;
        preColor = image[sr][sc];
        n = image.size();
        m = image[0].size();
        DFS(sr , sc , image);
        return image;
    }
};