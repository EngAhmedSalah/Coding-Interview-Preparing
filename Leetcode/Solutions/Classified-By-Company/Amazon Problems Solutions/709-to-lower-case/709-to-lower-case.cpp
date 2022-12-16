class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0 ; s[i] ; ++i)
            s[i] = tolower(s[i]);
        return s;
    }
};