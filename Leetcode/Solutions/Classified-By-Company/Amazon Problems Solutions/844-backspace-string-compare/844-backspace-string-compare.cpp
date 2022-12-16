class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>st1 , st2;
        for(int i = 0 ; s[i] ; ++i)
        {
            if(st1.empty() && s[i] != '#')
                st1.push_back(s[i]);
            else if(s[i] == '#' && !st1.empty())
                st1.pop_back();
            else if(s[i] != '#')
                st1.push_back(s[i]);
        }
        for(int i = 0 ; t[i] ; ++i)
        {
            if(st2.empty() && t[i] != '#')
                st2.push_back(t[i]);
            else if(t[i] == '#' && !st2.empty())
                st2.pop_back();
            else if(t[i] != '#')
                st2.push_back(t[i]);
        }
        if(st1.size() != st2.size())
            return false;
        for(int i = 0 ; i < st1.size() ; ++i)
        {
            if(st1[i] != st2[i]){
                cout<<st1[i]<<" "<<st2[i];
                return false;
            }
        }
        return true;
    }
};