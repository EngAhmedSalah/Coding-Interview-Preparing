class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> preSum(nums.size());
        preSum[0] = nums[0];
        for(int i = 1 ; i < nums.size() ; ++i)
            preSum[i] = preSum[i - 1] + nums[i];
        return preSum;
    }
};