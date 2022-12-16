class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int i = 0 ; i < nums.size() - n ; ++i)
        {
            for(int j = i ; j < nums.size() ; j += n)
            {
                ans.push_back(nums[j]);
            }
        }
        return ans;
    }
};