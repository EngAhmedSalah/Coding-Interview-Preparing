class Solution {
public:
    bool isPalindrom(string &s)
    {
        int len = s.length();
        for(int i = 0 ; i <= len/2 ; ++i)
            if(s[i] != s[len - i - 1])
                return false;
        return true;
    }
    int countSubstrings(string s) 
    {
        int cnt = 0;
        for(int i = 0 ; i < s.length() ; ++i)
        {
            for(int j = i ; j < s.length() ; ++j)
            {
                string sub = s.substr(i , j - i + 1);
                cnt += isPalindrom(sub);
            }
        }
        return cnt;
    }
};