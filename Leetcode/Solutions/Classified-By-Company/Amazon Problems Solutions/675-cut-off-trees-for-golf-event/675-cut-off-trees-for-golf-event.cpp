class Solution {
public:
    
    int n , m;
    int dx[4] = {0 , 0 , 1 , -1};
    int dy[4] = {1 , -1 , 0 , 0};
    bool valid(int x , int y)
    {
        return x >= 0 && x < n && y >= 0 && y < m;
    }
    int BFS(int xSrc , int ySrc , int xDest , int yDest , vector<vector<int>>& forest)
    {
        queue<pair<int , int > > q;
        int cnt = -1;
        bool vis[51][51] = {0};
        int dis[51][51] = {0};
        
        vis[xSrc][ySrc] = 1;
        dis[xSrc][ySrc] = 0;
        q.push({xSrc , ySrc});
        while(!q.empty())
        {
            int ux = q.front().first ,  uy = q.front().second;
            q.pop();
            if(ux == xDest && uy == yDest)
                return dis[xDest][yDest];
            for(int i = 0 ; i < 4 ; ++i)
            {
                int newX = ux + dx[i];
                int newY = uy + dy[i];
                if(valid(newX , newY))
                {
                    if(!vis[newX][newY] && forest[newX][newY] > 0)
                    {
                        vis[newX][newY] = 1;
                        dis[newX][newY] = dis[ux][uy] + 1;
                        q.push({newX , newY});
                    }
                }
            }
        }
        return -1;
    }
    int cutOffTree(vector<vector<int>>& forest) {
        n = forest.size();
        m = forest[0].size();
        vector<pair<int , pair<int , int> > > trees;    //this will store the trees values in ascending order
        for(int i = 0 ; i < n ; ++i)
            for(int j = 0 ; j < m ; ++j)
                if(forest[i][j] > 1)
                    trees.push_back({forest[i][j] , {i , j}});
        sort(trees.begin() , trees.end());
        int totalDistance = 0;
        int x = 0 , y = 0;                              //to start from the first cell
        for(int i = 0 ; i < trees.size() ; ++i)
        {
            int traverseValue = BFS(x , y  , trees[i].second.first , trees[i].second.second , forest);
            if(traverseValue == -1)
                return -1;
            totalDistance += traverseValue;
            x = trees[i].second.first , y = trees[i].second.second;
        }
        return totalDistance;
    }
};