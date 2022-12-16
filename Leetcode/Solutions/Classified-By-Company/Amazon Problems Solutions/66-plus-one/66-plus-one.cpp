class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        if(digits[i] != 9)
        {
            digits[i] ++;
            return digits;
        }
        while(i > 0 && digits[i] == 9 )
            --i;
        if(i == 0 && digits[i] == 9)
        {
            vector<int> ans;
            ans.push_back(1);
            for(int i = 0 ; i < digits.size() ; ++i)
                ans.push_back(0);
            return ans;
        }
        else
        {
            digits[i] += 1;
            for(i = i + 1 ; i < digits.size() ; ++i)
                digits[i] = 0;
            return digits;
        }
    }
};