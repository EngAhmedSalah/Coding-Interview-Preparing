class Solution {
public:
    bool isEmptyStr(string s)
    {
        for(int i = 0 ; s[i] ; ++i)
            if(isalpha(s[i]) || isdigit(s[i]))
                return false;
        return true;
    }
    string reverseWords(string s) {
        stack<string> st;
        istringstream is(s);
        string word = "";
        string ans = "";
        while(getline(is , word , ' '))
        {
            if(!isEmptyStr(word))
                st.push(word);
        }
        while(!st.empty())
        {
            ans += st.top();
            ans += (st.size() == 1) ? "" : " ";
            st.pop();
        }
        return ans;
    }
};