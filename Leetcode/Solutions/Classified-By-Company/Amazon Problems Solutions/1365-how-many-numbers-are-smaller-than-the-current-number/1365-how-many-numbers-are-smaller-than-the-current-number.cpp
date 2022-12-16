class Solution
{
public:
    int BS(int x, int sz, vector<int>& nums)
    {
        int l = -1, r = sz - 1, mid = (l + r + 1) / 2;
        while(l < r)
        {
            mid = (l + r + 1) / 2;
            if(nums[mid] >= x)
                r = mid - 1;
            else
                l = mid;
        }
        return l;
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        vector<int> ans , sortedNums;
        sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());
        for(int i = 0 ; i < nums.size() ; ++i)
            ans.push_back(BS(nums[i], nums.size(), sortedNums) + 1);
        return ans;
    }
};