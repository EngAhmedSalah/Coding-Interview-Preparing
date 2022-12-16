class Solution {
public:
    string filter(string s)
    {
        string filtered = "";
        for(int i = 0 ; s[i] ; ++i)
            if(s[i] >= 'a' && s[i] <= 'z')
                filtered += s[i];
            else if (s[i] >= 'A' && s[i] <= 'Z')
                filtered += tolower(s[i]);
        return filtered;    
    }
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string , bool> ban;
        unordered_map<string , int> freq;
        for(int i  = 0 ; i < banned.size() ; ++i)
            ban[banned[i]] = 1;
        istringstream is(paragraph);
        string item;
        while(std::getline(is,item,' '))
        {
            istringstream iss(item);
            string item2;
            while(std::getline(iss,item2,','))
            {
                item2 = filter(item2);
                if(ban[item2] != 1)
                ++freq[item2];
            }
        }
        int mx = 0;
        string ans;
        for(auto x : freq)
        {
            if(x.second > mx)
            {
                mx = x.second;
                ans = x.first;
            }
            cout<<x.first<<" "<<x.second<<"\n";
        }
        return ans;
    }
};