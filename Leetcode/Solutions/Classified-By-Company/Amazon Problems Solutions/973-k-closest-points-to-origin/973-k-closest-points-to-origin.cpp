class Solution {
public:
    static bool cmp(vector<int> &s , vector<int> &f)
    {
        int x = pow(s[0] , 2) + pow(s[1] , 2);
        int y = pow(f[0] , 2) + pow(f[1] , 2);
        if(x < y)
            return true;
        return false;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin() , points.end() , cmp);
        return vector<vector<int> > (points.begin() , points.begin() + k);
    }
};