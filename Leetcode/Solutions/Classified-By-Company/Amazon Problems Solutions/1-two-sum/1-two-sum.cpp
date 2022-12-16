class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
{
        unordered_map<int ,int> vis;
        vector<int> ans;
	for(int i = 0 ; i < nums.size() ; ++i)
		vis[nums[i]] = i;
		
	for(int i = 0 ; i < nums.size() ; ++i)
	{
		if(vis[target - nums[i]] && vis[target - nums[i]] != i)
			{
				ans.push_back(vis[target - nums[i]]);
				ans.push_back(i);
            return ans;
			}
	}
    return ans;
}
};