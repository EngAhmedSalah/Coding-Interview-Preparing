class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int , int> table;
        for(int i = 0 ; i < nums2.size() ; ++i)
        {
            if(st.empty())
                st.push(nums2[i]);
            else if(st.top() > nums2[i])
                st.push(nums2[i]);
            else
            {
                while(!st.empty() && nums2[i] > st.top())
                {
                    table[st.top()] = nums2[i];
                    st.pop();
                }
                st.push(nums2[i]);
            }
        }
        while(!st.empty())
        {
            table[st.top()] = -1;
            st.pop();
        }
        vector<int> ans;
        for(int i = 0 ; i < nums1.size() ; ++i)
            ans.push_back(table[nums1[i]]);
        return ans;
    }
};
    
/*

1 


*/