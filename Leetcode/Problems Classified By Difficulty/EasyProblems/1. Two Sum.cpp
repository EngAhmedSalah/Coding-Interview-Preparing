class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int>ans;
        map<int , int> vis;
        for(int i = 0 ; i < nums.size() ; ++i)
            vis[nums[i]] = i  + 1;
        for(int i = 0 ; i < nums.size() ; ++i)
        {
            if(vis[target - nums[i]] && i != vis[target- nums[i]] - 1)
            {
                ans.push_back(i);
                ans.push_back(vis[target - nums[i]] - 1);
                break;
            }
        }
        return ans;
    }
};
