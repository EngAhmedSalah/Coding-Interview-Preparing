class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre[nums.size()];
        int post[nums.size()];
        int n = nums.size();
        vector<int> ans(n);
        pre[0] = nums[0];
        post[n - 1] = nums[n - 1];
        //evaluate pre array and post array
        for(int i = 1; i < nums.size() ; ++i)
            pre[i] = pre[i - 1] * nums[i];
        for(int i = n - 2 ; i >= 0 ; --i)
            post[i] = post[i + 1] * nums[i];
        for(int i = 0 ; i < nums.size() ; ++i)
        {
            if(i == 0)
                ans[i] = post[i + 1];
            else if(i == nums.size() - 1)
                ans[i] = pre[i - 1];
            else
                ans[i] = pre[i - 1] * post[i + 1];
        }
        return ans;
    }
};