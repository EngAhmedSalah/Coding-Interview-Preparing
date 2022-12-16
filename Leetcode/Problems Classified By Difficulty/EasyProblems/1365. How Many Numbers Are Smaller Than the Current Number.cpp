class Solution
{
    /*
    idea : binary search over the values and get the last number x that x < searchKey and store the answer + 1
        motonic function for searching for 3
       index          -1 0 1 2 3 4 5
       array             1 2 2 3 3 4
       binaryValues      1 1 1 0 0 0
                       l           r
        search for the last number x that x < searchKey
        if array[mid] >= searchKey then:
            move the right to mid - 1
        else:
            make the left = mid
        Note : we make mid = (l + r + 1) / 2 instead of mid = (l + r) / 2  to avoid infinity loop
        imagine that case  searchKey = 3:
        -1 0 1 2 3 4 5
           1 2 2 3 3 4
           1 1 1 0 0 0
               l r
        mid = (l + r) / 2 = (2 + 3) / 2 = 2   --> l = mid so , l = 2
again   mid = (l + r) / 2 = (2 + 3) / 2 = 2   --> l = mid so , l = 2
so , we add +1 to mid = (l + r + 1) / 2  to avoid infinity loop
        
    */
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
