#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	vector<int> runningSum(vector<int>&nums)
	{
        vector<int> sum(nums.size() + 1 , 0);
		for(int i = 0 ; i < nums.size();++i)
			if(!i)
				sum[i] = nums[i];
			else
				sum[i] = sum[i - 1] + nums[i];
		return sum;
	 }
};
int main()
{
    Solution obj;
    obj.runningSum(;
}
