Reverse Integer Reverse Integer class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        sort(J.begin() , J.end());
        int cnt = 0;
        for(int i = 0 ; i < S.length() ; ++i)
            if(J.find(S[i]) != string::npos)
                ++cnt;
        return cnt;
    }
};
