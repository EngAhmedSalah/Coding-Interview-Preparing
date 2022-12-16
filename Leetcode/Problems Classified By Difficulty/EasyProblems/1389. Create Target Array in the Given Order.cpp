class Solution {
public:
    vector<int> updateVector(vector<int>& v , int pos , int val)
    {
        vector<int> updated (v.begin() , v.begin() + pos);
        updated.push_back(val);
        for(int i = pos ; i < v.size() ; ++i)
            updated.push_back(v[i]);
        return updated;
    }
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) 
    {
        vector<int>ans;
        for(int i = 0 ; i < nums.size() ; ++i)
        {
            ans = updateVector(ans , index[i] , nums[i]);
        }
        return ans;
    }
};
