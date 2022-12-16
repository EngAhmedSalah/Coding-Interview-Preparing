class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;
        for(int i = 0 ; s[i] ; ++i)
        {
            if(st.empty())
                st.push(s[i]);
            else if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else if((st.top() == '(' && s[i] == ')') || (st.top() == '{' && s[i] == '}') || (st.top() == '[' && s[i] == ']'))
                st.pop();
            else
                st.push(s[i]);
        }
        return st.empty();
    }
};
