class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0 ; i < nums.size() ; ++i)
            for(int j = 0 ; j < nums.size() ; ++j)
                cnt += (nums[i] == nums[j] && i < j);
        return cnt;
    }
};