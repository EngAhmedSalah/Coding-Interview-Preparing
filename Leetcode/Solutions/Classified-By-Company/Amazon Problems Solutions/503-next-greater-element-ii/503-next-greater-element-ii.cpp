class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<pair<int , int> > st;         
        unordered_map<int , int> table;     //to save the answer
        int n = nums.size();
        for(int i = 0 ; i < n ; ++i)        //store the array twice to canlculate circular answer
            nums.push_back(nums[i]);
        for(int i = 0 ; i < n*2 ; ++i)      //the same solution for problem [496. Next Greater Element I]
        {
            if(st.empty())
                st.push({nums[i] , i});
            else if(st.top().first > nums[i])
                st.push({nums[i] , i});
            else
            {
                while(!st.empty() && nums[i] > st.top().first)
                {
                    table[st.top().second] = nums[i];
                    st.pop();
                }
                st.push({nums[i] , i});
            }
        }
        while(!st.empty())
        {
            table[st.top().second] = -1;
            st.pop();
        }
        vector<int> ans;
        for(int i = 0 ; i < n ; ++i)
            ans.push_back(table[i]);
        return ans;
    }
};