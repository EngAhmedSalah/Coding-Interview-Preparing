class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = -1;
        for(int i = 0 ; i < candies.size() ; ++i)
            mx = max(mx , candies[i]);
        vector<bool>ans;
        for(int i = 0 ; i < candies.size() ; ++i)
            ans.push_back(candies[i] + extraCandies >= mx ? 1 : 0);
        return ans;
    }
};
