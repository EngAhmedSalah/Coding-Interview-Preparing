class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0 , j = s.length() - 1 ; i < j ; )
        {
            if(isalnum(s[i]) && isalnum(s[j]))
            {
                char c1 = tolower(s[i]);
                char c2 = tolower(s[j]);
                cout<<c1<<" "<<c2<<"\n";
                if(c1 == c2)
                {
                    ++i , --j;
                    continue;
                }
                else
                    return false;
            }
            else if(!isalnum(s[i]))
                ++i;
            else if(!isalnum(s[j]))
                --j;
        }
        return true;
    }
};