class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0 ; i < nums.size() - 1 ; i += 2)
        {
            while(nums[i])
                ans.push_back(nums[i + 1]) , nums[i]--;
        }
        return ans;
    }
};
