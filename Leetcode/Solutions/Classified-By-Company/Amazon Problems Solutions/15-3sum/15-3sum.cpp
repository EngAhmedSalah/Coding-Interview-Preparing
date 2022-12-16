class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        map<pair<int , pair<int , int> > , bool > isAns;
        vector<vector<int> > ans;
        for(int i=0;i<n-2;i++)
        {
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                int sum = nums[l] + nums[r] + nums[i];
                if(sum == 0)
                {
                    if(!isAns[{nums[i] , {nums[l] , nums[r]}}])
                    {
                        ans.push_back(vector<int>{nums[i], nums[l] , nums[r]});
                        isAns[{nums[i] , {nums[l] , nums[r]}}] = 1;
                    }
                        
                    l++;
                    r--;
                }
                else if(sum < 0)
                {
                    l++;
                }
                else
                    r--;
            }
        }
        return ans;
    }
                        
};