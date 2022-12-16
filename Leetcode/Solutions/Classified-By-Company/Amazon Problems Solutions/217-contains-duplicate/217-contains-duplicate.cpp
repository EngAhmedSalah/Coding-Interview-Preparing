class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int , int> fr;
        for(int i = 0 ; i < nums.size() ; ++i)
            ++fr[nums[i]];
        for(auto x : fr)
            if(x.second > 1)
                return true;
        return false;
    }
};